#include <iostream>
#include <cstdlib>
using namespace std;

#include "LL.h"

LL::LL(){ //done
       hol = NULL;
       size = 0;
}


LL::~LL(){
  //cout<<"destructor..."<<endl; 
  Quests* t = hol;
  int i;
  for(i=0;i<size;i++) {
    hol = hol->move_next();
    delete(t);
    t = hol;
  }
  size--;
}


void LL::show_all(int K, Character Irenee, int &enen){
     Quests* t = hol;
     int i;
        t->show_Q(t, K, Irenee, enen);
}


void LL::add_Q(Quests *&A){//done

          hol->insert(A);// new_node->next=hol;
          hol = A;

       size++;

 }

float LL::temp_LL(){
  Quests* t = hol;
  int temp;
  return temp = t->GotempQ();
}


int LL::energy_LL(){
  Quests* t = hol;
  int en;
  return en = t->GoenergyQ();
}

void LL::next_Q(){
     Quests* t = hol;
     t = t->move_next();
}

Quests* LL::head_Q()
{
  return hol;
}