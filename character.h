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
  //PRE: -
  //POS: creates a characer who has name = " ", shield = 0, health = 0, energy = 0.
  Character();

  //PRE: -
  //POS: creates a character who has name = "name", shield = first "shield", health = second "health", energy = third "energy".
  Character(string name, int shield, int health, int energy);

  //PRE: character has to be a valid pointer/adress of a character.
  //POS: creates a character who has the same name, shield, health and energy than personaje.
  Character(const Character &character);

  //PRE: -
  //POS: returns a string = "no element".
   virtual string get_element();
  //PRE: -
  //POS: returns the name of the character.
  string get_name();

  //PRE: -
  //POS: returns an int equals to the shield of the character.
  int get_shield();

  //PRE: -
  //POS: returns an int equals to the health of the character.
  int get_health();

  //PRE: -
  //POS: returns an int equals to the energy of the character.
  int get_energy();

  //PRE: -
  //POS: -
  virtual void eat();
};
#endif
