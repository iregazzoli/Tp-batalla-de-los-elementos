#include <iostream>
#include <fstream>
#include "character.h"
using namespace std;

Character::Character(){
  name = " ";
  shield = 0;
  health = 0;
  energy = 0;
}

Character::Character(string name, int shield, int health, int energy){
  this->name = name;
  this->shield = shield;
  this->health = health;
  this->energy = energy;
}

Character::Character(const Character &character){
  name = character.name;
  shield = character.shield;
  health = character.health;
  energy = character.energy;
}

string Character::get_element(){
  return "no element";
}


string Character::get_name(){
  return name;
}

int Character::get_shield(){
  return shield;
}

int Character::get_health(){
  return health;
}

int Character::get_energy(){
  return energy;
}

void Character::eat(){}
