
int square(int side) {
  return side * side;
}

int rectangle(int length, int width) {
  return length * width;
}

int triangle(int base, int height) {
  return 0.5 * base * height;
}

int circle(int radius) {
  return 3.14159 * radius * radius;
}

int trapezoid(int base, int height) {
  return (base + height) / 2;
}

int parallelogram(int base, int height) {
  return base + height;
}
