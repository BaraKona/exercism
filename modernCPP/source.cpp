/*
This include statement includes iostream header file content into our source.cpp file. 
We need it to use the std::cout object, also known as standard output
*/ 

#include <iostream>


// Main entry point for the program. 
int main() {
  std::cout << "Please enter an integer ";
  int i{};
  std::cin >> i;

  std::cout << "You entered: " << i;
}