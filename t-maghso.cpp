#include <iostream>

int main() {
  int number;
  int divisor_count = 0;
  std::cin >> number;

  for (int candidate_divisor = 1; candidate_divisor <= number / 2; ++candidate_divisor) {
    if (number % candidate_divisor == 0) {
      ++divisor_count;
    }
  }
  // Include the number itself as a divisor
  ++divisor_count;

  std::cout << "Number of divisors: " << divisor_count << std::endl;
  return 0;
}
