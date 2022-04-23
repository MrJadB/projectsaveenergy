#include "quests.h"
#include "class.h"

class LL{
      Quests *hol;
      int size;
public:
       void add_Q(Quests *&);
       void show_all(int, Character, int &);
    
       ~LL();
       LL();
      Quests* head_Q();
      float temp_LL();
      int energy_LL();
      void next_Q();

};
