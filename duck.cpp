/* duck debugger 
   4-19-21 */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "quack_lib.cpp"
#include "duck.h"

#define VERSION 0.01

void print_version(){
  std::cout << "version: " << std::setprecision(3) << VERSION << "\n\n";
}

int main(int argc, char *argv[]){
  std::srand(std::time(nullptr));
  std::string uInput;

  if (argc != 1){
    std::cout << "duck needs no arguments.\n";
    return 0;
  }

  std::cout << "welcome to duck, the helpful(?) duck debugging tool.\n";
  std::cout << "speak with the duck through the command line and maybe (s)he ";
  std::cout << "will be able to help you through the issue you are having.\n\n";
  std::cout << "enter 'quit' or ^C into the command line to terminate.\n";

  print_version();

  std::cout << "~> ";

  while (getline(std::cin, uInput) && uInput != "quit"){
    quack();
    std::cout << "~> ";
  }

  std::cout << "goodbye!\n";
  
  return 0;
}

void quack(){
  auto rand = std::rand() % quacks.size();
  std::cout << quacks[rand] << std::endl;
}
