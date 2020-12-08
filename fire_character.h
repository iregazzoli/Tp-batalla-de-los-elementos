#ifndef FIRE_CHARACTER_H
#define FIRE_CHARACTER_H


class FireCharacter: public Character{
private:
  bool have_wood;
public:

  //PRE: -
  //POS: creates a fire character who has name = string, shield = first int, health = second int, energy = third int.
  FireCharacter(string, int, int, int);

  //PRE: -
  //POS: returns a string = "Fire".
  string get_element();

  //PRE: -
  //POS: feeds the character. (?
  void eat();
};

#endif
