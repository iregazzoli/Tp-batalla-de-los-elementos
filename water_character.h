#ifndef WATER_CHARACTER_H
#define WATER_CHARACTER_H


class WaterCharacter: public Character{
private: //Is debatable that this could be summarize in one field and it would follow the assigment, but i decided to do them separetly
  bool plankton;
  int times_he_ate;
public:

  //PRE: -
  //POS: creates a water character who has name = string, shield = first int, health = second int, energy = third int.
  WaterCharacter(string, int, int, int);

  //PRE: -
  //POS: returns a string = "Water".
  string get_element();

  //PRE: -
  //POS: feeds the character. 
  void eat();
};

#endif
