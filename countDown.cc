#include <iostream>

int main(void) {
  
  int top;
  std::cout << "Enter the starting count: ";
  std::cin >> top;

  int count = 0;
  while (count < top) {
    std::cout << count << "\n";
    count = count + 1;
  }
  std::cout << "Woo!\n";

  return 0;
}
