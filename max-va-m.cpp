#include <stdio.h>

int main() {
  int count, value, maximum, minimum;

  printf("How many numbers will you enter?\n");
  if (scanf("%d", &count) != 1 || count <= 0) {
    printf("Invalid count.\n");
    return 1;
  }

  printf("Number 1: ");
  if (scanf("%d", &value) != 1) {
    printf("Invalid input.\n");
    return 1;
  }
  maximum = minimum = value;

  for (int i = 2; i <= count; ++i) {
    printf("Number %d: ", i);
    if (scanf("%d", &value) != 1) {
      printf("Invalid input.\n");
      return 1;
    }
    if (value > maximum) {
      maximum = value;
    }
    if (value < minimum) {
      minimum = value;
    }
  }

  printf("Maximum number: %d\nMinimum number: %d\n", maximum, minimum);
  return 0;
}
