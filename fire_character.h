#ifndef FIRE_CHARACTER_H
#define FIRE_CHARACTER_H
#include "character.h"

class FireCharacter: public Character{
private:
  bool have_wood;
public:
  FireCharacter(string, int, int, int);
  string get_element();
  void eat();

};

#endif
