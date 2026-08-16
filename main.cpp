#include "areas.cpp"
#include "exponents.cpp"
#include <iostream>

using namespace std;

void printWelcomeMessage() {
  cout << "      Welcome to Git !       " << endl;
}

void greetUser() {
  cout << "Hello, Developer!" << endl;
}

void printGoodbyeMessage() {
  cout << "Goodbye, Developer!" << endl;
}

int addNumbers(int a, int b) {
  return a + b;
}

int areas() {
  int length, width, area;

  cout << "1. Square" << endl;
  cout << "2. Rectangle" << endl;
  cout << "3. Triangle" << endl;
  cout << "4. Circle" << endl;

  int shape;
  cin >> shape;

  switch (shape) {
  case 1:
    cout << "Enter side: ";
    cin >> length;
    area = square(length);
    cout << "Area of square is: " << area << endl;
    break;

  case 2:
    cout << "Enter length and width: ";
    cin >> length >> width;
    area = rectangle(length, width);
    cout << "Area of rectangle is: " << area << endl;
    break;

  case 3:
    cout << "Enter base and height: ";
    cin >> length >> width;
    area = triangle(length, width);
    cout << "Area of triangle is: " << area << endl;
    break;

  case 4:
    cout << "Enter radius: ";
    cin >> length;
    area = circle(length);
    cout << "Area of circle is: " << area << endl;
    break;

  default:
    cout << "Invalid option" << endl;
  }

  return 0;
}

int calculator() {
  int a, b, op;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  cout << "1. Add" << endl;
  cout << "2. Subtract" << endl;
  cout << "3. Multiply" << endl;
  cout << "4. Divide" << endl;

  cin >> op;

  switch (op) {
  case 1:
    return a + b;
  case 2:
    return a - b;
  case 3:
    return a * b;
  case 4:
    if (b == 0) {
      cout << "Cannot divide by zero" << endl;
      return 0;
    }
    return a / b;
  default:
    cout << "Invalid operation" << endl;
    return 0;
  }
}

void mathOperations() {
  int choice;
  int number;
  int base, exponent;

  cout << "\nMath Operations" << endl;
  cout << "=====================" << endl;
  cout << "1. Square" << endl;
  cout << "2. Cube" << endl;
  cout << "3. Power" << endl;
  cout << "4. Square Root" << endl;
  cout << "5. Logarithm (base 10)" << endl;
  cout << "6. Natural Logarithm" << endl;
  cout << "7. Power of 10" << endl;
  cout << "8. Absolute Value" << endl;
  cout << "9. Factorial" << endl;
  cout << "10. GCD" << endl;
  cout << "11. LCM" << endl;
  cout << "12. Sine" << endl;
  cout << "13. Cosine" << endl;
  cout << "14. Tangent" << endl;
  cout << "15. Ceiling" << endl;
  cout << "16. Floor" << endl;

  cin >> choice;

  switch (choice) {
  case 1:
    cout << "Enter number: ";
    cin >> number;
    cout << "Square: " << squareex(number) << endl;
    break;

  case 2:
    cout << "Enter number: ";
    cin >> number;
    cout << "Cube: " << cube(number) << endl;
    break;

  case 3:
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result: " << power(base, exponent) << endl;
    break;

  case 4:
    cout << "Enter number: ";
    cin >> number;
    cout << "Square root: " << squareroot(number) << endl;
    break;

  case 5:
    cout << "Enter number: ";
    cin >> number;
    cout << "Logarithm: " << logarithm(number) << endl;
    break;

  case 6:
    cout << "Enter number: ";
    cin >> number;
    cout << "Natural logarithm: " << natural_logarithm(number) << endl;
    break;

  case 7:
    cout << "Enter number: ";
    cin >> number;
    cout << "Power of 10: " << powerof10(number) << endl;
    break;

  case 8:
    cout << "Enter number: ";
    cin >> number;
    cout << "Absolute value: " << absolute(number) << endl;
    break;

  case 9:
    cout << "Enter number: ";
    cin >> number;
    cout << "Factorial: " << factorial(number) << endl;
    break;

  case 10:
    cout << "Enter two numbers: ";
    cin >> base >> exponent;
    cout << "GCD: " << gcd(base, exponent) << endl;
    break;

  case 11:
    cout << "Enter two numbers: ";
    cin >> base >> exponent;
    cout << "LCM: " << lcm(base, exponent) << endl;
    break;

  case 12:
    cout << "Enter angle: ";
    cin >> number;
    cout << "Sine: " << sine(number) << endl;
    break;

  case 13:
    cout << "Enter angle: ";
    cin >> number;
    cout << "Cosine: " << cosine(number) << endl;
    break;

  case 14:
    cout << "Enter angle: ";
    cin >> number;
    cout << "Tangent: " << tangent(number) << endl;
    break;

  case 15:
    cout << "Enter number: ";
    cin >> number;
    cout << "Ceiling: " << ceil_value(number) << endl;
    break;

  case 16:
    cout << "Enter number: ";
    cin >> number;
    cout << "Floor: " << floor_value(number) << endl;
    break;

  default:
    cout << "Invalid option" << endl;
  }
}

int main() {
  printWelcomeMessage();
  greetUser();

  while (true) {
    int choice;

    cout << "\nProgram" << endl;
    cout << "=====================" << endl;
    cout << "1. Calculator" << endl;
    cout << "2. Areas" << endl;
    cout << "3. Math Operations" << endl;
    cout << "4. Exit" << endl;

    cin >> choice;

    switch (choice) {
    case 1:
      cout << "\nCalculator" << endl;
      cout << "Result: " << calculator() << endl;
      break;

    case 2:
      areas();
      break;

    case 3:
      mathOperations();
      break;

    case 4:
      printGoodbyeMessage();
      return 0;

    default:
      cout << "Invalid option" << endl;
    }
  }
}