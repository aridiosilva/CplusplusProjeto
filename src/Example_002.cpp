#include <iostream>
#include <cmath> // include math.h

using namespace std;

int main() {

int i,j; // a declaration of two integers ...
double x,y; // ... and two doubles

i = 5; // an assignment
j = 2*i + 3; // use value of i for assignment of j
x = 3.14; // an assignment of a floating point number
y = sin(x) * exp(-5*x);

cout << "The value of i is " << i << ", while y = " << y << endl;
return 0;

}