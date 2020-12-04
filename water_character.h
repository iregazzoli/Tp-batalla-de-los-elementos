#ifndef WATER_CHARACTER_H
#define WATER_CHARACTER_H
#include "character.h"

class WaterCharacter: public Character{
private: //Is debatable that this could be summarize in one field and it would follow the assigment, but i decided to do them separetly
  bool plankton;
  int times_he_ate;
public:
  WaterCharacter(string, int, int, int);
  string get_element();
  void eat();
};

#endif
