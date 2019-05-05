/*
Example of Signatures of functions

In C++, in contrast to C, it is possible that two dierent functions share exactly
the same name. That is because in C++ a function is identied by its signature which
comprises both the function's name and the list of arguments it takes. Hence the
following code is perfectly fine.
*/

#include <iostream>

using namespace std;

void add_some(int *i) 
{ 
    (*i) += 3; 
}
void add_some(double *x) 
{ 
    (*x) += 1.5; 
}

int main() {

    int a(1);
    double b(1.23);
   
    add_some(&a); add_some(&b);
   
    cout << "a = " << a << ", b = " << b << endl; // a = 4, b = 2.73
   
    return 0;

}
