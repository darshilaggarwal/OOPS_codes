#include <iostream>
using namespace std;

class Animal {         //grandparent class
public:
    void eat() {
        cout << "Animal: Eating food.\n";
    }
};

class Mammal : public Animal {        //parent class
public:
    void walk() {
        cout << "Mammal: Walking on land.\n";
    }
};

class Dog : public Mammal {           //child class
public:
    void bark() {
        cout << "Dog: Barking: Woof!\n";
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Level 1: From Animal
    myDog.walk(); // Level 2: From Mammal
    myDog.bark(); // Level 3: From Dog
    return 0;
}