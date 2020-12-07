#ifndef NODE_H
#define NODE_H
#include "character.h"

class Node{
private:
  Character* character;
  Node* next_node;
public:
  //PRE: character has to be a valid pointer to a character.
  //POS: creates a node with it's pointer "character" pointing to character and next_node pointing to null.
  Node(Character* character);

  //PRE: pointer needs to be a valid pointer to a node object
  //POS: changes the pointer "next_node" to point  to pointer.
  void change_pointer(Node* pointer);

  //PRE: -
  //POS: returns the pointer "next_node".
  Node* get_next_node();

  //PRE: -
  //POS: returns the pointer "character".
  Character* get_character();
};


#endif
