#include <iostream>

int main(void) {

  int c;
  std::cout << "Enter a temperature in degrees celsius: ";
  std::cin >> c;
  int f = c * 9 / 5 + 32;
  std::cout << "That is " << f << " degrees fahrenheit.\n";
  
  return 0;
}
