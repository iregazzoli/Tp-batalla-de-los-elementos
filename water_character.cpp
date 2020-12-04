#include "character.h"
#include "water_character.h"


WaterCharacter::WaterCharacter(string name, int shield, int health, int energy) :
                Character(name, shield, health, energy){
  this->plankton = true;
  this->times_he_ate = 0;
}

void WaterCharacter::eat(){
  Character::eat();

  std::cout << "Energia antes de comer: " << energy << '\n';

  if(plankton && times_he_ate <= 3){

    if(energy == 20){
      std::cout << "Energia llena no fue posible alimentar este personaje." << '\n';
      return;
    }

    else if(energy > 10 && energy < 20){ // If eating goes beyond the limit (20)
      std::cout << "La energia recuperada fue: " << 20 - energy << '\n';
      energy = 20;
      std::cout << "Energia actual: " << energy << '\n';
    }

    else{
      energy += 10;
      std::cout << "La energia recuperada fue: 10." << '\n';
      std::cout << "Energia actual: " << energy << '\n';
    }
    std::cout << "El personaje: " << name << " fue alimentado con plancton."<< '\n';
  }

  else if(!plankton)
    std::cout << "El personaje: " << name << "no posee plancton, no fue posible alimentarlo." <<'\n';

  else if(times_he_ate > 3)
    std::cout << "El personaje: " << name << "ya comió 3 veces." <<'\n';
}

string WaterCharacter::get_element(){
  return "Agua";
}
