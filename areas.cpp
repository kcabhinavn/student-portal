#include<iostream>


using namespace std;

int area(int length, int width) {
    return length * width;
}
int area(int side) {
    return side * side;
}

int area(int base, int height) {
    return 0.5 * base * height;
}

int areaOfCircle(int radius) {
    return 3.14 * radius * radius;
}