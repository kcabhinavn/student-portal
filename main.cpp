#include <iostream>
using namespace std;


void printWelcomeMessage() {
  cout << "      Welcome to Git !       " << std::endl;
}

void greetUser() { cout << "Hello, Developer!" << std::endl; }

int addNumbers(int a, int b) { return a + b; }

int main() {
  printWelcomeMessage();
  greetUser();

  int num1 = 5;
  int num2 = 10;
  int result = addNumbers(num1, num2);

  cout << "The sum of " << num1 << " and " << num2 << " is: " << result
       << endl;
  cout << "Program finished successfully." << endl;

  return 0;
}