/*
Using Classes

*/

#include <iostream>
#include <string>

using namespace std;

class student {
    
    string name, firstname;
    int year;

public:
    void create(const string &n, const string &fn, int y);
    void print();
};

void student::create(const string &n, const string &fn, int y) {

    name = n; firstname = fn; year = y;
}

void student::print() {
    
    cout << name << ", " << firstname << " (YEAR " << year << ")" << endl;
}

int main() {

    student s1;
    
    s1.create("Smith", "Alan", 1);
    s1.print();
    
    return 0;
}