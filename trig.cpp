#include <cmath>

int sine(int angle) {
  return sin(angle);
}

int cosine(int angle) {
  return cos(angle);
}

int tangent(int angle) {
  return tan(angle);
}
int cosecant(int angle) {
  return 1 / sin(angle);
}

int cotangent(int angle) {
  return 1 / tan(angle);
}

int secant(int angle) {
  return 1 / cos(angle);
}

int sin_inverse(int angle) {
  return asin(angle);
}
int cos_inverse(int angle) {
  return acos(angle);
}
int tan_inverse(int angle) {
  return atan(angle);
}

