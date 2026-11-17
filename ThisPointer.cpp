#include <iostream>
using namespace std;

class Student {
private:
    int age;                 // Member variable (belongs to the object)

public:
    // Parameter name is also 'age'
    Student(int age) {
        // If we write: age = age;
        // The compiler gets confused and assigns the parameter to itself!
        // The object's 'age' remains empty/garbage.

        // SOLUTION:
        this->age = age; 
        // ^^^ 'this->age' means: "The 'age' variable of THIS object"
        // 'age' on the right means: "The parameter passed into this function"
    }

    void display() {
        cout << "Student Age: " << this->age << endl;
    }
};

int main() {
    Student s1(20);
    s1.display();

    return 0;
}