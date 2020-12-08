#ifndef LIST_H
#define LIST_H
#include "node.h"


class List{
private:
  Node* first_pointer;
  Node* last_pointer;
  Node* current_pointer;

public:
  List();
  ~List();
  void restart_current_pointer();

  // PRE: -
  // POS: returns bool depending if the current_pointer is not equal to Null or not.
  bool next_node_not_null();

  //PRE: -
  //POS: returns a pointer to the current character and makes current_pointer point to the next node.
  Character* get_current_character();

  // PRE: new_character has to be a valid pointer to a character or a subclass.
  // POS: adds a node to the end of the list, who contains the adress of the new character.
  void add_character(Character* new_character);

  // PRE: -
  // POS: removes the node from the list that contains the character who's name is equal to "name".
  void remove_character(string name);

  // PRE: -
  // POS: shows all the name of the characters "on the list".
  void show_characters_names();

  // PRE: -
  // POS: shows the name, element, shield, health and energy of the caracter whos name is equal to "name".
  void show_character_stats(string name);

  // PRE: -
  // POS: feeds the character whos name is equal to "name".
  void feed_character(string name);

  // PRE: -
  // POS: returns a pointer that points to the first node of the list.
  Node* get_first_pointer();

  // PRE: -
  // POS: returns true if the list has no nodes linked to it or true if it has at least one.
  bool empty();
};

#endif
