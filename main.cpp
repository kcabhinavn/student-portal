#include <iostream>
using namespace std;


void printWelcomeMessage() {
  cout << "      Welcome to Git !       " << std::endl;
}

void greetUser() { cout << "Hello, Developer!" << std::endl; }

void printGoodbyeMessage() { cout << "Goodbye, Developer!" << std::endl; }

int addNumbers(int a, int b) { return a + b; }

int calculator(int a, int b, int op) { 
    switch (op) {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4: return a / b;
        default: return 0;
    }

}

int main() {
  printWelcomeMessage();
  greetUser();

  int num1 = 5;
  int num2 = 10;
  while(true) {
    cout<<"Calculator Operations:"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
  int op;
  cin>>op;
  if(op == 0) {
    printGoodbyeMessage();
    break;
  }
  int result = calculator(num1, num2, op);
  cout << "Result: " << result << endl;
  }
  return 0;
}