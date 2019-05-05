#include <iostream>
using namespace std;

int main() {

   int i, number;
   double x;
   double sum = 0.0; // initialize sum with 0.0

   cout << "How many numbers do you want to add up: ";
   cin >> number; // input an integer

   for (i = 0; i < number; i++) { // a for loop
       cout << "Input next number: ";
       cin >> x; // input a double
       sum = sum + x;
    }

    cout << "Final sum: " << sum << "." << endl;

    return 0;
}