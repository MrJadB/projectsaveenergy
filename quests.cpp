// temperature ต่อวัน
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>
using namespace std;

#include "LL.h"


int Something = 0, Something2 = 0;


Quests *Quests::move_next() { return next; }

void Quests::insert(Quests *&A) {
  A->next = this;
  // cout << "insert  " << A->nameQ << endl;
}

void Quests::show_Q(Quests *&A, int Kuy, Character Irenee, int & enen) // ให้เลือก 3 ตัว
{

  random_device rnum;
  mt19937 rng(rnum());
  uniform_int_distribution<std::mt19937::result_type> dist1(20, 32), dist2(1, 14);
  uniform_real_distribution<float> dist3(0.2, 2.8);
  LL ll_list;
  Quests *quest_list;

  int Renum = 0, Ranum, Reber = 0;
  int Yourquest;
  int i, j=0;

  if (Kuy == 0)//เควส 1
  {
    cout << "Choose a Quest \n";
    cout << "Be careful of your energy! " << Goenergy() << endl;
    Quests *ptr;

    /*while(j<14)
      {
        Ranum = dist2(rng);
        cout << Ranum << endl;
        j++;
      }*/
    
    while (Renum != 3)//ใส่เควส 3 เควส
    {
      Ranum = dist2(rng);
      
      ptr = A;

      while (ptr->move_next() != NULL && Reber != Ranum) {
        ptr = ptr->move_next();
        Reber += 1;
      }

      if (ptr->GoindiQ() == 0)//check ว่าใส่ไปรึยัง
      {
        Renum += 1;
        quest_list = new Quests(ptr->GonameQ(), ptr->GotempQ(), ptr->GoenergyQ(), 0, Renum);

        cout << "-> " << Renum << ". " << quest_list->GonameQ() << "   "
             << quest_list->GotempQ() << " Celsius   -"
             << quest_list->GoenergyQ() << " energy" << endl;

        ll_list.add_Q(quest_list);
        ptr->Setin1();
      }
    }
    
      Quests *S = A;

      while (S->move_next() != NULL)//เปลี่ยน indicator ให้เป็น 0 เหมือนเดิม
      {
        S->Setin2();
        S = S->move_next();
      }

    Quests *head;
    Quests *temp2 = NULL, *temp, *prev;
    temp = quest_list;

    do//เลือกเควสทำ
    {
      cout << "?  ";
      cin >> Yourquest;
    } while (Yourquest != 1 && Yourquest != 2 && Yourquest != 3);
    Something = Yourquest;

  
  while(temp->move_next()!=NULL&&temp->GonumQ()!=Yourquest)
    {
      //cout << "Do thing"<< temp->GonameQ() <<endl;
      temp = temp->move_next();
    }
  if(temp->GonumQ()!=0)
  {
    //cout << "Do thing" <<endl;
    temp->SetnumQ();
    
  }
    //cout << "Do thing"<< temp->GonameQ() <<endl;
    enen = Irenee.DeEn(temp->GoenergyQ());
    //cout << "dd " << Irenee.Goenergy();
    cin>>j;
  }
  


    
  else if (Kuy == 1)//เควส 2
  {
    
    Quests *temp;
    temp = quest_list;
    
    cout << "Your energy " << Irenee.Goenergy() << endl;
    while(temp!=NULL)
      {
       cout << "-> " << temp->GonumQ() << ". " << temp->GonameQ() << "   "
             << temp->GotempQ() << " Celsius   -"
             << temp->GoenergyQ() << " energy" << endl;

          temp = temp->move_next();
  
        }
    Quests *temp2=quest_list;
do//เลือกเควสทำ
{
      cout << "?  ";
      cin >> Yourquest;
     
    } while (Something == Yourquest || Yourquest > 3 || Yourquest <= 0);
    
   if(Something!=Yourquest)
      {
        while(temp2->move_next()!=NULL&&temp2->GonumQ()!=Yourquest)
    {
      //cout << "Do thing"<< temp->GonameQ() <<endl;
      temp2 = temp2->move_next();
    }
  if(temp2->GonumQ()!=0)
  {
    //cout << "Do thing" <<endl;
    temp2->SetnumQ();
    
  }
    //cout << "Do thing"<< temp->GonameQ() <<endl;
    enen = Irenee.DeEn(temp->GoenergyQ());
    //cout << "dd " << Irenee.Goenergy();
    //cout << "Your energy " << Irenee.Goenergy() << "  ทดลองงงง "<< endl;
        cin>>j;
        Something2 = Yourquest;
  }

    
    //cout << "Irénée " << Irenee.Goenergy() << endl;
  }
  
  
  
  
  
  else if (Kuy == 2)//เควส 3
  {
    Quests *temp=quest_list;
    cout << "Your energy " << Irenee.Goenergy() << endl;
    while(temp!=NULL)
      {
       
       cout << "-> " << temp->GonumQ() << ". " << temp->GonameQ() << "   "
             << temp->GotempQ() << " Celsius   -"
             << temp->GoenergyQ() << " energy" << endl;

          temp = temp->move_next();
        }
    Quests *temp2=quest_list;
do//เลือกเควสทำ
{
      cout << "?  ";
      cin >> Yourquest;
  
    } while (Something == Yourquest || Something2 == Yourquest || Yourquest > 3 || Yourquest <= 0);
    
if(Something!=Yourquest&& Something2 == Yourquest)
     {
        while(temp2->move_next()!=NULL&&temp2->GonumQ()!=Yourquest)
    {
      //cout << "Do thing"<< temp->GonameQ() <<endl;
      temp2 = temp2->move_next();
    }
  if(temp2->GonumQ()!=0)
  {
    //cout << "Do thing" <<endl;
    temp2->SetnumQ();
    
  }
    //cout << "Do thing"<< temp->GonameQ() <<endl;
     enen = Irenee.DeEn(temp->GoenergyQ());
    //cout << "dd " << Irenee.Goenergy();
    cin>>j;
  }


    Something = 0;
    Something2 = 0;
  }


  
    
    
    
 
  }

Quests::Quests(string xm, float x, int y, int z, int num) {
  nameQ = xm;
  tempQ = x;
  energyQ = y;
  indicator = z;
  numQ = num;
}

Quests::~Quests() {}

string Quests::GonameQ() { return nameQ; }

float Quests::GotempQ() { return tempQ; }

int Quests::GoenergyQ() { return energyQ; }

int Quests::GoindiQ() { return indicator; }

int Quests::GonumQ() { return numQ; }

int Quests::Setin1() { return indicator = 1; } // quest done 

int Quests::Setin2() { return indicator = 0; }

int Quests::SetnumQ() { return numQ = 0; }