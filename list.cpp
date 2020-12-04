#include "list.h"
#include "character.h"
#include "node.h"
#include <iostream>
#include <fstream>
using namespace std;


List::List(){
  first_pointer = 0;
  current_pointer = 0;
  last_pointer = 0;
}

void List::restart_current_pointer(){
  current_pointer = first_pointer;
}

bool List::next_node_not_null(){
  return (current_pointer != 0);
}

Character* List::get_current_character(){
  Node* aux = current_pointer;
  current_pointer = current_pointer->get_next_node();
  Character* current_cha = aux->get_character();
  return aux->get_character(); //returns a pointer
}


void List::add_character(Character* new_character){

  Node* new_node = new Node(new_character);
  if(empty())
    first_pointer = new_node;

  else
    last_pointer->change_pointer(new_node);

  last_pointer = new_node;
  restart_current_pointer();
}


void List::remove_character(string name){
  bool character_removed = false;
  Node* current_aux_node = first_pointer;
  Character* current_character = current_aux_node->get_character();

  // caso personaje a eliminar esta en el primer nodo
  if(current_character->get_name() == name){
    first_pointer = first_pointer->get_next_node();
    restart_current_pointer();
    delete current_aux_node->get_character();
    delete current_aux_node;
    std::cout << "\n";
    std::cout << "Personaje con nombre: " << name << " eliminado correctamente." << '\n';
    return;
  }

  Node* previous_aux_node = current_aux_node;
  current_aux_node = first_pointer->get_next_node();


  while(current_aux_node != 0){

    current_character = current_aux_node->get_character();

    if(current_character->get_name() == name){
      previous_aux_node->change_pointer(current_aux_node->get_next_node());
      delete current_aux_node->get_character();
      delete current_aux_node;
      std::cout << "\n";
      std::cout << "Personaje con nombre: " << name << " eliminado correctamente." << '\n';
      character_removed = true;
      break;
    }
    else{
      previous_aux_node = current_aux_node;
      current_aux_node = current_aux_node->get_next_node();
    }
  }

  if(!character_removed){
    std::cout << "\n";
    std::cout << "Personaje con nombre: " << name << " no hayado en la lista." << '\n';
  }
}

void List::show_characters_names(){
  restart_current_pointer();
  std::cout << "\n";
  std::cout << "Los nombres de los personajes son:" << '\n';
  while(next_node_not_null()){
    Character* current_character = get_current_character();
    std::cout << current_character->get_name() << '\n';
  }
}

void List::show_character_stats(string name){
  restart_current_pointer();
  bool personaje_encontrado = false;
  while(next_node_not_null()){
    Character* current_character = get_current_character();
    if(current_character->get_name() == name){
      std::cout << "Personaje:" << '\n';
      std::cout << "◉ Nombre: " << current_character->get_name() <<'\n';
      std::cout << "◉ Elemento: " << current_character->get_element() <<'\n';
      std::cout << "◉ Escudo: " << current_character->get_shield() <<'\n';
      std::cout << "◉ HP: " << current_character->get_health() <<'\n';
      std::cout << "◉ Energy: " << current_character->get_energy() <<'\n';
      personaje_encontrado = true;
    }
  }
  if(!personaje_encontrado)
    std::cout << "Personaje no encontrado." << '\n';
}

void List::feed_character(string name){
  restart_current_pointer();
  bool personaje_encontrado = false;
  while(next_node_not_null()){
    Character* current_character = get_current_character();
    if(current_character->get_name() == name){
      current_character->eat();
      personaje_encontrado = true;
    }
  }
  if(!personaje_encontrado)
    std::cout << "Personaje no encontrado." << '\n';
}

Node* List::get_first_pointer(){
  return first_pointer;
}

bool List::empty(){
  return (first_pointer == 0);
}

List::~List(){
  while(! empty()){
    Node* aux = first_pointer;
    first_pointer = aux->get_next_node();
    delete aux->get_character();
    delete aux;
  }
}
