#include "character.h"
#include "fire_character.h"


FireCharacter::FireCharacter(string name, int shield, int health, int energy) :
                Character(name, shield, health, energy){
  this->wood = true;
}

void FireCharacter::eat(){
  Character::eat();
  std::cout << "Vida antes de comer: " << health << '\n';
  if(wood){

    if(health == 100){
      std::cout << "Vida llena no fue posible alimentar este personaje." << '\n';
      return;
    }

    else if(health > 75 && health < 100){ // If eating goes beyond the limit (20)
      std::cout << "La Vida recuperada fue: " << 100 - health << '\n';
      health = 100;
      std::cout << "Vida actual: " << health << '\n';
    }

    else{
      health += 15;
      std::cout << "La Vida recuperada fue: 15." << '\n';
      std::cout << "Vida actual: " << health << '\n';
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
