#include <iostream>
#include <string>
using namespace std;

class Student {
public:

    string name;
    int age;
    char grade;

    void print(){
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Grade: " << grade << endl;
    }
    
    void change(){
        age += 1;
    }

};

int main() {

    Student student1;
    Student student2;

    student1.name = "John Doe";
    student1.age = 20;
    student1.grade = 'A';

    student2.name = "Jane Smith";
    student2.age = 22;      
    student2.grade = 'B';

    student1.change();
    student1.print();

    student2.change();
    student2.print();

    return 0;
}

