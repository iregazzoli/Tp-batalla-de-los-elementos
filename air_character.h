#ifndef AIR_CHARACTER_H
#define AIR_CHARACTER_H
#include "character.h"

class AirCharacter: public Character{
public:
  AirCharacter(string, int, int, int);
  string get_element();
  void eat();
};

#endif
