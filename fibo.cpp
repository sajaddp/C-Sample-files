#include <iostream>
#include <vector>

std::vector<int> generateFibonacciSequence(int length) {
  std::vector<int> sequence;
  if (length <= 0) return sequence;
  sequence.reserve(length);
  sequence.push_back(1);
  if (length == 1) return sequence;
  sequence.push_back(1);
  for (int index = 2; index < length; ++index) {
    sequence.push_back(sequence[index - 1] + sequence[index - 2]);
  }
  return sequence;
}

int main() {
  constexpr int fibonacciCount = 10;
  const auto fibonacciSequence = generateFibonacciSequence(fibonacciCount);
  for (size_t index = 0; index < fibonacciSequence.size(); ++index) {
    std::cout << fibonacciSequence[index];
    if (index != fibonacciSequence.size() - 1) {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}
