#include <iostream>
#include <cmath>
#include <limits>

int main() {
  double coefficientA, coefficientB, coefficientC;
  std::cout << "Enter coefficients a, b, and c separated by spaces:\n";
  std::cin >> coefficientA >> coefficientB >> coefficientC;

  if (std::abs(coefficientA) < std::numeric_limits<double>::epsilon()) {
    std::cout << "Coefficient 'a' must not be zero.\n";
    return EXIT_FAILURE;
  }

  double discriminant = coefficientB * coefficientB - 4.0 * coefficientA * coefficientC;

  if (discriminant < 0.0) {
    std::cout << "The equation has no real roots.\n";
  } else {
    double sqrtDiscriminant = std::sqrt(discriminant);
    double denominator = 2.0 * coefficientA;
    double root1 = (-coefficientB + sqrtDiscriminant) / denominator;
    double root2 = (-coefficientB - sqrtDiscriminant) / denominator;

    if (std::abs(root1 - root2) < std::numeric_limits<double>::epsilon()) {
      std::cout << "Double root: x = " << root1 << '\n';
    } else {
      std::cout << "x1 = " << root1 << " , x2 = " << root2 << '\n';
    }
  }

  return 0;
}
