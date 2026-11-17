#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int age;
    char grade; 

};

void printStudentInfo(Student student) {
    cout << "Student Name: " << student.name << endl;
    cout << "Student Age: " << student.age << endl;
    cout << "Student Grade: " << student.grade << endl;
}

int main() {
    Student student1;
    Student student2;

    student1.name = "John Doe";
    student1.age = 20;
    student1.grade = 'A';


    student2.name = "Jane Smith";
    student2.age = 22;      
    student2.grade = 'B';

    printStudentInfo(student1); 
    printStudentInfo(student2);

    return 0;
}
