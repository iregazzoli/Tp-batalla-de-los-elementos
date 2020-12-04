#include "character.h"
#include "fire_character.h"


FireCharacter::FireCharacter(string name, int shield, int health, int energy) :
                Character(name, shield, health, energy){
  this->have_wood = true;
}

void FireCharacter::eat(){
  Character::eat();
  std::cout << "Energia antes de comer: " << energy << '\n';
  if(have_wood){

    if(energy == 20){
      std::cout << "Energia llena no fue posible alimentar este personaje." << '\n';
      return;
    }

    else if(energy > 5 && energy < 20){ // If eating goes beyond the limit (20)
      std::cout << "La energia recuperada fue: " << 20 - energy << '\n';
      energy = 20;
      std::cout << "Energia actual: " << energy << '\n';
    }

    else{
      energy += 15;
      std::cout << "La energia recuperada fue: 15." << '\n';
      std::cout << "Energia actual: " << energy << '\n';
    }
    std::cout << "El personaje: " << name << " fue alimentado con madera."<< '\n';
  }
  else{
    std::cout << "El Personaje: " << name << "no posee madera, no fue posible alimentarlo." << '\n';
  }
}


string FireCharacter::get_element(){
  return "Fuego";
}
