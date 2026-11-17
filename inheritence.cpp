#include <iostream>
#include <string>
using namespace std;

// 1. BASE CLASS (Parent / Superclass)
class Person {
public:
    string name;
    int age;

    void eat() {
        cout << name << " is eating lunch.\n";
    }
};

// 2. DERIVED CLASS (Child / Subclass)
// Syntax: class DerivedName : access_specifier BaseName
class Student : public Person {
public:

    string studentId; // Unique to Student

    void study() {
        cout << name << " (ID: " << studentId << ") is studying C++.\n";
    }

};

int main() {
    Student s;

    // Inherited from Person:
    s.name = "Alice";
    s.age = 20;
    s.eat();

    // Specific to Student:
    s.studentId = "STU101";
    s.study();

    return 0;
}