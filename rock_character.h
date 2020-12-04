#ifndef ROCK_CHARACTER_H
#define ROCK_CHARACTER_H
#include "character.h"

class RockCharacter: public Character{
private:
  bool herbs;
public:
  RockCharacter(string, int, int, int);
  string get_element();
  void eat();

};

#endif
