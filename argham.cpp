#include <iostream>
#include <cstdlib>

int countDigits(int number) {
  if (number == 0) return 1;
  int digitCount = 0;
  number = std::abs(number);
  while (number > 0) {
    number /= 10;
    ++digitCount;
  }
  return digitCount;
}

int main() {
  int inputNumber;
  std::cout << "Enter an integer: ";
  if (!(std::cin >> inputNumber)) {
    std::cerr << "Invalid input." << std::endl;
    return 1;
  }
  std::cout << "Number of digits: " << countDigits(inputNumber) << std::endl;
  return 0;
}
