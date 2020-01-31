#include <iostream>

int main(void) {
  
  int top;
  std::cout << "Enter the starting count: ";
  std::cin >> top;

  int count = top;
  while (count > 0) {
    std::cout << count << "\n";
    count = count - 1;
  }
  std::cout << "Woo!\n";

  return 0;
}

