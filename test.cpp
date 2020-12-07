#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

bool check_input(char c){
  if(!isdigit(c)){
    return false;
  }
  else{
    int int_input = c - '0';
    if(int_input < 1  || int_input > 6){
      return false;
    }
    else{
      return true;
    }
  }
}


int main() {
  string user_input;

  cin >> user_input;
  int value = user_input[0] - '0';
  std::cout << value + 5 << '\n';
  // while(!check_input(user_input[0])){
  //   std::cout << "opción invalida por favor ingrese un valor entre 1 a 6" << '\n';
  //   cin >> user_input;
  // }
  // std::cout << "ended correclty" << '\n';
  // return 0;
}
