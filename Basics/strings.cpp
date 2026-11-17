#include<iostream>
#include<string>
using namespace std;
int main() {

    string str1 = "Hello";

    string str2 = "World";

    string str3 = str1 + " " + str2;   // String concatenation

    cout << str3 << endl; 

    cout << "Length of str3: " << str3.length() << endl; 

    cout << "Character at index 6: " << str3[6] << endl; 
    cout << "Character at index 0: " << str3.at(0) << endl;

    str3[6] = 'w'; 

    cout << "Modified str3: " << str3 << endl;

    cout<< "input in a string: ";
    string str4;
    getline(cin, str4); // Read a line of input into str4
    cout << "You entered: " << str4 << endl;

    return 0;
}