#include <iostream>
#include <fstream>
#include <stdlib.h> // includes random
#include "string"
#include "list.h"
using namespace std;

bool test_add_character(List *characters){
  // List characters;

  FireCharacter roma("Roma", 5, 23, 6);
  FireCharacter jeyc("JC", 4 ,21 , 5);
  characters->add_character(&roma);
  characters->add_character(&jeyc);

  Character* current_c = characters->get_current_character();
  // std::cout <<  current_c->get_name() << '\n'; //works
  if(current_c->get_name() != "Roma"){
    return false;
  }

  current_c = characters->get_current_character();
  // std::cout <<  current_c->get_name() << '\n'; //works

  if(current_c->get_name() != "JC"){
    return false;
  }

  return true;
}

void test_show_names(List characters){
  // List characters;

  // FireCharacter roma("Roma", 5, 23, 6);
  // FireCharacter jeyc("JC", 4 ,21 , 5);
  // characters.add_character(&roma);
  // characters.add_character(&jeyc);

  characters.show_characters_names();
  //Works fine
}

// void test_show_stats(List* characters){
//   // List characters;
//
//   // FireCharacter roma("Roma", 5, 23, 6);
//   // FireCharacter jeyc("JC", 4 ,21 , 5);
//   // characters.add_character(&roma);
//   // characters.add_character(&jeyc);
//
//   characters->show_character_stats("Roma");
//   //Works fine
// }



int main() {
  bool result = false;
  List characters;

  // FireCharacter roma("Roma", 5, 23, 6);
  // FireCharacter jeyc("JC", 4 ,21 , 5);
  // characters.add_character(&roma);
  // characters.add_character(&jeyc);

  result = test_add_character(&characters);
  std::cout << "result == " << result <<'\n';
  //LLEGA

  characters.restart_current_pointer();
  //LLEGA

  characters.show_characters_names();
  // NO LLEGA

  // std::cout <<  current_c->get_name() << '\n';
  //NO LLEGA

  // test_show_names(&characters);
  // test_show_stats(&characters);

  return 0;
}
