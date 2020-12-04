#ifndef NODE_H
#define NODE_H
#include "character.h"

class Node{
private:
  Character* character;
  Node* next_node;
public:
  Node(Character* character);
  void change_pointer(Node* pointer);
  Node* get_next_node();
  Character* get_character();
};


#endif
