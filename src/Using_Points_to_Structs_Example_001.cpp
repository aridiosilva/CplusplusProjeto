/*
Pointers to structures

At times it may be preferable to use (arrays of) pointers to structures. In this
case the main() program above would have to be changed to something like

Observe that here the members of a struct are accessed via e.g. pointer->firstname, 
whereas before we used variable.firstname.

*/

#include <iostream>
#include <string>

using namespace std;

struct student {
    string name, firstname;
    int year;
};

int main() {

    int N;
    
    cout << "Number of students: "; cin >> N;
    
    student **studlist = new student* [N];

    for (int i = 0; i < N; i++) {

        studlist[i] = new student;
        cin >> studlist[i]->name >> studlist[i]->firstname >> studlist[i]->year;
    }
    // etc
    
    return 0;
}