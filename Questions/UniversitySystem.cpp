#include <iostream>
#include <string>
using namespace std;

class Person {
protected:

    string name;
    int age;

public:

    Person(string name, int age) : name(name) , age(age) {
        
        cout << "Person Created: " << this->name << endl;

        // this->name = name;

        // this->age = age;
    }

    void introduce (){
        cout << "Name: " << name << " | Age: " << age;    
    }
    
};

class Student : public Person{
private:

    string major;
    double gpa;
public:
     Student(string name, int age, string major, double gpa)
        : Person(name, age), major(major), gpa(gpa) {
            cout << "Student Created: " << this->name << endl;
        }

        //overrriding / extending indroduce()

    void introduce(){
        Person::introduce();   // introduce function is inheriting atributes of person
        cout << " | Major: " << major << " | GPA: " << gpa << endl;
    }
};

int main(){

    Person P ("person1",40);
    P.introduce();

    Student S ("Student1",20,"Computer Science",9.8);
    S.introduce();

    return 0;
}