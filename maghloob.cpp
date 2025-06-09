#include <iostream>

int main() {
  int number;
  std::cin >> number;

  if (number == 0) {
    std::cout << 0;
  } else {
    if (number < 0) {
      std::cout << '-';
      number = -number;
    }
    std::string reversedDigits;
    while (number > 0) {
      reversedDigits += static_cast<char>('0' + (number % 10));
      number /= 10;
    }
    std::cout << reversedDigits;
  }
  std::cout << std::endl;
  return 0;
}
