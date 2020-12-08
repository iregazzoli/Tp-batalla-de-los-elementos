#ifndef AIR_CHARACTER_H
#define AIR_CHARACTER_H


class AirCharacter: public Character{
public:
  //PRE: -
  //POS: creates a air character who has name = string, shield = first int, health = second int, energy = third int.
  AirCharacter(string, int, int, int);

  //PRE: -
  //POS: returns a string = "Air".
  string get_element();

  //PRE: -
  //POS: feeds the character. (?
  void eat();
};

#endif
