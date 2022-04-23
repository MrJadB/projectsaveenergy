
//#ifndef Quests_h
//#define Quests_h

#include "class.h"
class Quests:public Character
{
  string nameQ;
   
  protected:
  float tempQ;
  int energyQ, indicator, numQ;
   
  public:
    Quests* next;

    Quests(string="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", float=0.0, int=0, int=0, int=0 );
    ~Quests();

    void show_Q(Quests*&, int, Character, int & ); 
    Quests* move_next(); 
    void insert(Quests*&);
    string GonameQ();
    float GotempQ();
    int GoenergyQ();
    int GoindiQ();
    int GonumQ();
    int Setin1();
    int Setin2();
    int SetnumQ();
};

//#endif