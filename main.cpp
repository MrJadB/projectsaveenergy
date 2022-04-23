 // O-o !
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;
#include "story.h"
#include "LL.h"


// prototype \\
//void clearout();
void clearout(){ cout << "\033[2J\033[1;1H"; }

int main(int argc, char *argv[]){

  int n;

   random_device rnum;
  mt19937 rng(rnum());
  uniform_int_distribution<std::mt19937::result_type> dist1(20,32), dist2(1,3);
  uniform_real_distribution<float> dist3(0.2, 2.8);

  
  string nn;
  string nameQuest[14] = {
      "Drying clothes in the sun.",
      "Turn off electrical Machines after using.",
      "Plant a tree everyday.",
      "Use bags instead of plastic bags.",
      "Turn off the light and the water after using.",
      "Use alternative Energy from solar panel.",
      "Use alternative Energy from Windmill.",
      "Sort wastes.",
      "Riding a bike.",
      "Ride in the same car when going the same way.",
      "Build Wind Turbines.",
      "Build Solar Panels.",
      "Generation power from Bike generator.",
      "Picking up trash at beach."
};

/*string nameQuest2[14] = {
  "a","s","d","f","g","h","k","l","q","w","e","r","t","y"
};*/
  
  Character Irenee, Pname;
  
  
  do{
    cout << "Irénée อินี่!" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Exit Game" << endl;
    cout << "? ";
    cin >> n;

    if (n == 1) {
      cout << "Game Starto!" << endl;
    } else if (n == 2) {
      cout << "Game Terminated :<" << endl;
      exit(0);
    } else if ( n != 1 && n != 2){
      cout << "1 or 2 only! >:" << endl;
    }
    usleep(3000000);
    clearout();

  }while(n != 1 && n != 2);
  
  cout << "Please enter your name : ";
  cin >> nn;

  Pname.DoName(nn); 

  cout << Pname.GoName() << endl;
  //cout << "Name " << Irenee.GoName() << Irenee.Gohp() <<" " << Irenee.Goenergy() << endl;
 //cin >> n;

  
  openstory();
  //clearout();

  
  Quests *q;
  LL QL;
  int i, z=0, Kuy=0;
  int energy[14], enen=0;
  
    for(i = 0; i < 14; i++){
     energy[i] = dist1(rng);
      q = new Quests(nameQuest[i],dist3(rng),energy[i]); //constructor
      QL.add_Q(q);//add front of linked List + size++
   }
  while(Irenee.Goenergy()>0 && Kuy!=3){
    
    cout << "============= Quest ============== \n";
    QL.show_all(Kuy, Irenee, enen);
    //QL.show_all(Kuy, Irenee.Goenergy());
    cout << "================================== \n";
    Kuy+=1;
    Irenee.DoEnergy(enen);
    clearout();
  }
  
  return 0;
}

// function


//cl