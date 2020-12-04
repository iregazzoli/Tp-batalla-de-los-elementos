#include "character.h"
#include "rock_character.h"


RockCharacter::RockCharacter(string name, int shield, int health, int energy) :
                Character(name, shield, health, energy){
  this->herbs = true;
}

void RockCharacter::eat(){
  Character::eat();
  std::cout << "Energia antes de comer: " << energy << '\n';
  if(herbs){

    if(energy == 20){
      std::cout << "Energia llena no fue posible alimentar este personaje." << '\n';
      return;
    }

    else if(energy > 12 && energy < 20){ // If eating goes beyond the limit (20)
      std::cout << "La energia recuperada fue: " << 20 - energy << '\n';
      energy = 20;
      std::cout << "Energia actual: " << energy << '\n';
    }

    else{
      energy += 8;
      std::cout << "La energia recuperada fue: 8." << '\n';
      std::cout << "Energia actual: " << energy << '\n';
    }
    std::cout << "El personaje: " << name << " fue alimentado con hierbas."<< '\n';
  }
  else{
    std::cout << "El Personaje: " << name << "no posee hierbas, no fue posible alimentarlo." << '\n';
  }
}


string RockCharacter::get_element(){
  return "Tierra";
}
