#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
#include "class.h"

unsigned int microsecond = 1000000;


int main (int argc, char *argv[]){

  int n = 0;
  
 do{
    cout << "IRENEE อินี่!" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Exit" << endl;
    cin >> n;
   
    switch(n){
      case 1 : cout << "Game Starto! \n"; break;
      case 2 : cout << "Game Terminated :< \n";
               exit(0);
      default : cout << "1 or 2 only! >: \n";
                usleep(3 * microsecond);;
                system("CLS");
    }
   
   }while(n != 1 && n != 2);

  return 0;
  }