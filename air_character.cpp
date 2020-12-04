#include "character.h"
#include "air_character.h"

AirCharacter::AirCharacter(string name, int shield, int health, int energy) :
                Character(name, shield, health, energy){
}

void AirCharacter::eat(){
std::cout << "Los personajes de aire no necesitan alimentarse." << '\n';
}


string AirCharacter::get_element(){
  return "Aire";
}
