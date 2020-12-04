#include <iostream>
#include <fstream>
#include <stdlib.h> // includes random
#include "string"
#include "list.h"
using namespace std;

//capaz deberia usar una funcion para abrir el csv y otra para cargarlo?
bool Load_list_from_csv(List* characters){
  ifstream file;
  file.open("personajes.csv");

  if(!file){
    cout << "ERROR!: No se pudo abrir el archivo, cerrando el programa." << endl;
    return false;
  }

  else{

    if(file.peek() == EOF){
      cout << "ERROR!: el archivo esta vacio, cerrando el programa." << endl;
      return false;
    }

    string element;
    string name;
    string shield;
    string health;
    int energy;

    while((file.peek() != EOF)){ // no uso file.good porque loopeaba una vez extra

      getline(file, element, ',');
      getline(file, name, ',');
      getline(file, shield, ',');
      getline(file, health, '\n');
      energy = rand() % 20;

      if(element == "Fuego"){
          characters->add_character(new FireCharacter(name, stoi(shield), stoi(health), energy));
      }

      else if(element == "Agua"){
          characters->add_character(new WaterCharacter(name, stoi(shield), stoi(health), energy));
      }

      else if(element == "Aire"){
          characters->add_character(new AirCharacter(name, stoi(shield), stoi(health), energy));
      }

      else if(element == "Tierra"){
        characters->add_character(new RockCharacter(name, stoi(shield), stoi(health), energy));
      }

    }
  }
  file.close();
  return true;
}

void show_menu(){
  cout << "\n" << endl;
  cout << "--------------------------MENU--------------------------" << endl;
  cout << "Bienvenido al juego 'La batalla De Los Elementos'" << endl;
  cout << "Por favor selecione una de las siguientes opciones:" << endl;
  cout << "\n";
  cout << "[1] Agregar un nuevo personaje." << endl;
  cout << "[2] Eliminar un personaje." << endl;
  cout << "[3] Mostrar todos los nombres de los personajes." << endl;
  cout << "[4] Buscar por nombre los detalles de un personaje en particular." << endl;
  cout << "[5] Alimentar un personaje." << endl;
  cout << "[6] Cerrar el Juego." << endl;
  cout << "\n";
  cout << "Ingrese la opcion deseada: ";
}

void add_character(List* characters){

  string name;
  string elements[4] = {"Fuego", "Agua", "Tierra", "Aire"};
  string element = elements[rand() % 3];
  int shield = rand() % 2;
  int health = rand() % 90 + 10;
  int energy = rand() % 20;


  cout << "Ingrese el nombre del nuevo personaje: ";
  cin >> name;

  if(element == "Fuego"){
    characters->add_character(new FireCharacter(name, shield, health, energy));
  }

  else if(element == "Agua"){
    characters->add_character(new WaterCharacter(name, shield, health, energy));
  }

  else if(element == "Aire"){
    characters->add_character(new AirCharacter(name, shield, health, energy));
  }

  else if(element == "Tierra"){
    characters->add_character(new RockCharacter(name, shield, health, energy));
  }
}

void remove_character(List* characters){
  string name;
  std::cout << "Ingrese el name del personaje que desea eliminar: ";
  std::cin >> name;
  characters->remove_character(name);
}

void show_characters_names(List* characters){
  characters->show_characters_names();
}

void show_character_stats(List* characters){
  string name;
  std::cout << "Ingrese el nombre del personaje cuyos detalles desea ver: ";
  std::cin >> name;
  characters->show_character_stats(name);
}

void feed_character(List* characters){
  string name;
  std::cout << "Ingrese el nombre del personaje que desea alimentar: ";
  std::cin >> name;
  characters->feed_character(name);
}

bool interpretate_user_input(int user_input, List* characters){
  switch (user_input) {
  case 1:
    add_character(characters);
    break;
  case 2:
    remove_character(characters);
    break;
  case 3:
    show_characters_names(characters);
    break;
  case 4:
    show_character_stats(characters);
    break;
  case 5:
    feed_character(characters);
    break;
  case 6:
    return true;
    break;
  }
  return false;
}



int main(){
    List characters;

    if (!Load_list_from_csv(&characters)){ //segmentation error cuando el csv esta vacio
      return 0;
    }

    bool end_program = false;

    while(!end_program){

      int user_input;

      show_menu();

      cin >> user_input;

      while(user_input < 1  || user_input > 6){ // No verifica si lo ingresado no es un int
        std::cout << "opcion invalida por favor ingrese un valor entre 1 a 6" << '\n';
        cin >> user_input;

      }

      end_program = interpretate_user_input(user_input, &characters);
    }

  return 0;
}
