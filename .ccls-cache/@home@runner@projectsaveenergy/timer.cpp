#include <chrono>
#include <atomic>


namespace shino
{
    template <typename Clock = std::chrono::high_resolution_clock>
    class stopwatch
    {
        const typename Clock::time_point start_point;
    public:
        stopwatch() : 
            start_point(Clock::now())
        {}

        template <typename Rep = typename Clock::duration::rep, typename Units = typename Clock::duration>
        Rep elapsed_time() const
        {
            std::atomic_thread_fence(std::memory_order_relaxed);
            auto counted_time = std::chrono::duration_cast<Units>(Clock::now() - start_point).count();
            std::atomic_thread_fence(std::memory_order_relaxed);
            return static_cast<Rep>(counted_time);
        }
    };

    using precise_stopwatch = stopwatch<>;
    using system_stopwatch = stopwatch<std::chrono::system_clock>;
    using monotonic_stopwatch = stopwatch<std::chrono::steady_clock>;
}

#include <iostream>
#include <thread>

int main()
{
    std::cout << "testing scheduler overhead\n";
    using namespace std::literals;
    for (auto wait_time = 100ms; wait_time <= 1s; wait_time += 100ms)
    {
        shino::precise_stopwatch stopwatch;
        std::this_thread::sleep_for(wait_time);
        auto actual_wait_time = stopwatch.elapsed_time<unsigned int, std::chrono::microseconds>();
        std::cout << "Scheduler overhead is roughly " << actual_wait_time - (wait_time + 0us).count() << " microseconds"
                  << " for " << wait_time.count() << " milliseconds of requested sleep time\n";
    }
}