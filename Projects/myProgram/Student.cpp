#include "Student.h"
#include <iostream>
using namespace std;


void Student::setName(string n) {
    name = n;
}
void Student::display() {
    cout << "Student Name: " << name << endl;
}

 