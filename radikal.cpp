#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  constexpr int kIterationCount = 10;
  double currentRoot = std::sqrt(2.0);
  double totalSum = 0.0;

  std::cout << std::fixed << std::setprecision(6);

  for (int iteration = 1; iteration <= kIterationCount; ++iteration) {
    totalSum += currentRoot;
    std::cout << "Root value " << iteration << ": " << currentRoot << '\n';
    currentRoot = std::sqrt(currentRoot + 2.0);
  }

  std::cout << "Total sum of " << kIterationCount << " root values: " << totalSum << '\n';
  return 0;
}
