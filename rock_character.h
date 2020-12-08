#ifndef ROCK_CHARACTER_H
#define ROCK_CHARACTER_H

class RockCharacter: public Character{
private:
  bool herbs;
public:

  //PRE: -
  //POS: creates a rock character who has name = string, shield = first int, health = second int, energy = third int.
  RockCharacter(string, int, int, int);

  //PRE: -
  //POS: returns a string = "Tierra".
  string get_element();

  //PRE: -
  //POS: feeds the character. 

  void eat();
};

#endif
