#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string name) : name(name) {                 //base or parent constructor
        cout << "1. [Base Constructor] Person born: " << name << endl;
    }
    ~Person() {
        cout << "4. [Base Destructor] Person destroyed: " << name << endl;
    }
};

class Student : public Person {
private:
    double gpa;
public:
    // CHAINING SYNTAX: Call Person(name) first!
    Student(string name, double gpa) : Person(name), gpa(gpa) {          // derived or child constructor
        cout << "2. [Derived Constructor] Student born with GPA: " << gpa << endl;
    }
    ~Student() {
        cout << "3. [Derived Destructor] Student destroyed" << endl;
    }
};

int main() {
    Student s("Alice", 3.8);

    return 0;
}