#include <iostream>

int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) { //Check if pointer is valid before dereferencing
    *ptr = 10; 
  } else {
    std::cerr << "Error: Null pointer dereference avoided." << std::endl;
  }
  return 0;
}