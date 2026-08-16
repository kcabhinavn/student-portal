#include <math.h>

int squareex(int side) { return side * side; }

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

int natural_logarithm(int number) { return log10(number); }

int powerof10(int n){
    return power(n, 10);
}

int factorial(int number) {
  int result = 1;

  for (int i = 2; i <= number; i++) {
    result *= i;
  }

  return result;
}

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}

int lcm(int a, int b) {
  return (a / gcd(a, b)) * b;
}


int absolute(int number) {
  return number < 0 ? -number : number;
}