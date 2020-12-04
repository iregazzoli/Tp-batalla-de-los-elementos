#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <fstream>
using namespace std;

class Character{
protected:
  string name;
  int shield;
  int health;
  int energy;

public:
  Character();
  Character(string name, int shield, int health, int energy);

  Character(const Character &personaje);

  //PRE: -
  //POS: return the element of the character
   virtual string get_element();
  //PRE: -
  //POS: return the name of the character
  string get_name();

  //PRE: -
  //POS: return the shield of the character
  int get_shield();

  //PRE: -
  //POS: return the health of the character
  int get_health();

  //PRE: -
  //POS: return the energy of the character
  int get_energy();

  virtual void eat();
};
#endif
