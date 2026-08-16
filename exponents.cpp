#include <math.h>

int square(int side) { return side * side; }

int cube(int side) { return side * side * side; }

int power(int base, int exponent) {
  int result = 1;
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}

int squareroot(int number) { return sqrt(number); }

int logarithm(int number) { return log(number); }