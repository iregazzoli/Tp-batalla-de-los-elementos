#include "character.h"
#include "node.h"

Node::Node(Character* character){
  // std::cout << character->get_name() << '\n'; 
  this->character = character;
  next_node = 0;
}

void Node::change_pointer(Node* pointer){
  next_node = pointer;
}

Node* Node::get_next_node(){
  return next_node;
}

Character* Node::get_character(){
  return character; //returns a pointer
}
