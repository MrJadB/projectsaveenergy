
#ifndef Class_h
#define Class_h

class Character{
  string name;
	protected:
	int hp, Energy, indicator;
	
	public:
  void Dohp(int=15);
  void DoEnergy(int=15);
  void DoName(string);
  Character(string="Irénée", int=10, int=69);
  ~Character();
  string GoName();
  int Gohp();
  int Goenergy();
  int GoIndi();
  void show_C();
  int DeEn(int);
  int Dohp();
};

#endif