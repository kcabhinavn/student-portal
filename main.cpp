#include "areas.cpp"
#include "trig.cpp"
#include <iostream>

using namespace std;

void printWelcomeMessage() {
  cout << "      Welcome to Git !       " << std::endl;
}

void greetUser() { cout << "Hello, Developer!" << std::endl; }

void printGoodbyeMessage() { cout << "Goodbye, Developer!" << std::endl; }

int addNumbers(int a, int b) { return a + b; }

int areas() {
  int length, width, area;
  cout<<"1. Square"<<endl;
  cout<<"2. Rectangle"<<endl;
  cout<<"3. Triangle"<<endl;
  cout<<"4. Circle"<<endl;
  int shape;
  cin>>shape;
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
  }
  return 0;
}

int trigonometry() {
  int angle, sine, cosine, tangent;
  cout << "1. Sine" << endl;
  cout << "2. Cosine" << endl;
  cout << "3. Tangent" << endl;
  cout << "4. Cosecant" << endl;
  cout << "5. Cotangent" << endl;
  cout << "6. Secant" << endl;
  cout << "7. Sine Inverse" << endl;
  cout << "8. Cosine Inverse" << endl;
  cout << "9. Tangent Inverse" << endl;
  cout << "10. Cosecant Inverse" << endl;
  cout << "11. Cotangent Inverse" << endl;
  cout << "12. Secant Inverse" << endl;
  cout << "13. Sine Hyperbolic" << endl;
  cout << "14. Cosine Hyperbolic" << endl;
  cout << "15. Tangent Hyperbolic" << endl;
  cout << "16. Cosecant Hyperbolic" << endl;
  cout << "17. Cotangent Hyperbolic" << endl;
  cout << "18. Secant Hyperbolic" << endl;
  int option;
  cin >> option;
  switch (option) {
  case 1:
    cout << "Enter angle: ";
    cin >> angle;
    sine = sine(angle);
    cout << "Sine of " << angle << " is " << sine << endl;
    break;
  case 2:
    cout << "Enter angle: ";
    cin >> angle;
    cosine = cosine(angle);
    cout << "Cosine of " << angle << " is " << cosine << endl;
    break;
  case 3:
    cout << "Enter angle: ";
    cin >> angle;
    tangent = tangent(angle);
    cout << "Tangent of " << angle << " is " << tangent << endl;
    break;
  // Add cases for other trigonometric functions
  }
}

int calculator() {
  int a, b, op;
  cout << "Enter two numbers: ";
  cout << "1. Add" << endl;
  cout << "2. Subtract" << endl;
  cout << "3. Multiply" << endl;
  cout << "4. Divide" << endl;
  cin >> a >> b >> op;
  switch (op) {
  case 1:
    return a + b;
  case 2:
    return a - b;
  case 3:
    return a * b;
  case 4:
    return a / b;
  default:
    return 0;
  }
}

int main() {
  printWelcomeMessage();
  greetUser();

  int num1 = 5;
  int num2 = 10;
  while (true) {
    cout << "Program" << endl;
    cout << "=====================" << endl;
    cout << "1. Calculator" << endl;
    cout << "2. Areas" << endl;
    cout<<"3. Trigonometry"<<endl;
    cout << "4. Exit" << endl;
    cin >> num1;
    switch (num1) {
    case 1:
      cout << "Calculator" << endl;
      calculator();
      break;
    case 2:
      areas();
      break;
    case 3:
      trigonometry();
      break;
    case 4:
      printGoodbyeMessage();
      break;
    default:
      cout << "Invalid option" << endl;
      break;
    }
  }
  return 0;
}