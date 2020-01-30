#include <iostream>

int main(void) {

  int f;
  std::cout << "Enter a temperature in degrees fahrenheit: ";
  std::cin >> f;
  int c = (f - 32) * 5 / 9;
  std::cout << "That is " << c << " degrees celsius.\n";
  
  return 0;
}
