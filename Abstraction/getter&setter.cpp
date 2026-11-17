#include<iostream>
using namespace std;

class Student {
private:
    string name = "Alice"; // Private member variable
    int age;
public:
    // Getter for name
    string getName() {  // Function to get the name
        return name;     // here name is inside the class
    }  
    int setAge(int a) { // Function to set the age
        age = a; // here age is inside the class
    }    
     
};
int main() {
    Student student;
    // student.name = "Alice"; // Error: 'name' is private
    cout << "Student Name: " << student.getName() << endl; // Accessing name through getter
    student.setAge(20); // Setting age through setter
    return 0;
}

