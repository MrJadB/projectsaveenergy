

#include <iostream>
#include <cstdlib>
using namespace std;
#include "class.h"

Character::Character(string nm, int hh, int ee)
{
  name = nm;
  hp = hh;
  Energy = ee;
}

Character::~Character()
{
  //cout<<"End Game"<<endl;
}

void Character::DoName(string nn){
  name = nn;
}

void Character::Dohp(int hh)
{
 hp = hh; 
}

void Character::DoEnergy(int ee)
{
  Energy = ee;
}

string Character::GoName()
{
  return name;
}
  
int Character::Gohp()
{
  return hp;
}

int Character::Goenergy()
{
  return Energy;
}

void Character::show_C()
{
  cout<< "Name : "    << GoName()    << endl;
  cout<< "Hp : "      << Gohp()      << endl;
  cout<< "Energy : "  << Goenergy()  << endl;
}

int Character::GoIndi()
{
  return indicator;
}

int Character::DeEn(int enq)
{
  cout << "DeEn   " << Energy << " - " << enq << " = " ;
  Energy -= enq;
  cout << Energy << endl;
  return Energy;
}
  
int Character::Dohp()
{
  int hp;
  return hp = Gohp();
}