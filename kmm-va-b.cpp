#include <iostream>
#include <algorithm>

int calculateGCD(int firstNumber, int secondNumber) {
  while (secondNumber != 0) {
    int remainder = firstNumber % secondNumber;
    firstNumber = secondNumber;
    secondNumber = remainder;
  }
  return firstNumber;
}

int calculateLCM(int firstNumber, int secondNumber) {
  return (firstNumber / calculateGCD(firstNumber, secondNumber)) * secondNumber;
}

int main() {
  int firstNumber{}, secondNumber{};
  std::cout << "Enter two integers: ";
  if (!(std::cin >> firstNumber >> secondNumber)) {
    std::cerr << "Invalid input." << std::endl;
    return 1;
  }

  int gcd = calculateGCD(firstNumber, secondNumber);
  int lcm = calculateLCM(firstNumber, secondNumber);

  std::cout << "LCM = " << lcm << std::endl;
  std::cout << "GCD = " << gcd << std::endl;

  return 0;
}
