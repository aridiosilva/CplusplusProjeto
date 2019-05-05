/* 
Macros in C++

 The C/C++ compiler evaluates certain preprocessing directives before actually 
 starting to compile a source code. These preprocessing directives are lines in
 your program that start with #. An example is the #include statement, which 
 tells the compiler what kind of system calls and libraries you want to use in
 your program.

 A macro is another preprocessing directive. In its simplest form, a macro is just
 an abbreviation. It is a name which stands for a fragment of code. Usually, this
 will be some specic constant, such as Pi and DEBUG in the example below. Before 
 you can use a macro, you must dene it explicitly with the #define directive. It 
 is followed by the name of macro and then the code it should be an abbreviation for.
 
 Macros can also be dened to take arguments. In this case, any expansion you dene 
 for the macro, will be applied with the arguments substituted by the values you 
 are giving. The function macros SQR() and MAX() in the example below demonstrate 
 the usage.
 
 Finally, you can also use conditional directives that allow a part of the program 
 to be ignored during compilation, on some conditions. A conditional can test either 
 an arithmetic expression or whether a 4 OOP in C++ name is dened as a macro. Check
 the usage of #if, #else, #endif, and #ifdef, #ifndef in the example below.
 */

#include <iostream>

using namespace std;

#define SQR(a) ((a)*(a))
#define MAX(a,b) ((a) > (b) ? (a) : (b))

#ifndef Pi
   #define Pi 3.1415926535897932384626433832795028841971
#endif

#define DEBUG 0
int main() {

#ifdef MAX
    if (MAX(2.0,3.4) > 2.5) cout << "Square of pi is: " << SQR(Pi) << endl;
#endif

#if DEBUG
    cout << "Debugging switched on." << endl;
    cout << " --- " << __FILE__ << " line " << __LINE__ << "--- Compiled on "
    << __DATE__ << "." << endl;
#else
    cout << "Debugging switched off." << endl;
#endif

return 0;
}