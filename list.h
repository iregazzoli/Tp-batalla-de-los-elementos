#ifndef LIST_H
#define LIST_H
#include "character.h"
#include "fire_character.h"
#include "water_character.h"
#include "air_character.h"
#include "rock_character.h"
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
  // POS: returns true if current_pointer is not equal to Null
  bool next_node_not_null();

  //
  //POS: returns current character and makes current_pointer point to the next node
  Character* get_current_character();
  void add_character(Character* new_character);
  void remove_character(string name);
  void show_characters_names();
  void show_character_stats(string name);
  void feed_character(string name);
  Node* get_first_pointer();

  bool empty();

};

#endif
