#include <iostream>
using namespace std;

// Base Class (Parent)
class Animal {
public:
    void eat() {
        cout << "Animal is eating food.\n";
    }
};

// Derived Class (Child)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking: Woof! Woof!\n";
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.bark(); // From Dog
    return 0;
}