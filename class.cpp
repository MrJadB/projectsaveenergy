#include <iostream>
#include <cstdlib>
using namespace std;
#include "class.h"

Character::Character(string nm, int hh, int ee)
{
  name = nm;
  hp = hh;
  ee = Energy;
}

Character::~Character()
{
  
}
