/*

  Passing Variables bye Reference and by Value

*/

#include <iostream>

using namespace std;

void print_by_val(double x)  { cout << x << endl;  }
void print_by_ref(double *x) { cout << *x << endl;  }

void execute(void (*f)()) 
{
    if (f != NULL) 
       f();
    else 
       cout << "Nothing to execute!" << endl;
}

void print()  { cout << "Hello World!" << endl; }

int main() {

    void (*p)() = &print;

    execute(NULL);
    execute(p);

    double q = 3.14;

    print_by_val(q);
    print_by_ref(&q);

    return 0;
 
}