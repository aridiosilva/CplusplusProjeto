/*

Default arguments

C++ offers the possibility to implement default arguments for functions, in case
that they are called with less parameters than originally specified. Here is a 
simple example.

Note that all default parameters must be to the right of any parameters that do 
not have defaults. Also, once you dene a default parameter, all the following 
parameters have to have a default as well.

*/

#include <iostream>

using namespace std;

void print(int i = 10, int j = 5)
{ 
    cout << i << " " << j << endl; 
}

int main () 
{
    print(2); // '2 5'
    return 0;
}
