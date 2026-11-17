#include <iostream>
#include <string>      // using string class (class defiend data type)
using namespace std;

int main() {
    string str = "Computer Science";   //Object of string class

    //printing the string
    cout << "String: " << str << endl; // Computer Science

    // 1. .length() -> Returns total characters
    cout << "Length: " << str.length() << endl; // 16

    // 2. .at(pos) -> 0-indexed character access (Safer than [])
    cout << "Char at 5: " << str.at(5) << endl; // 't'

    // 3. .substr(start, length) -> Extracts part of the string
    cout << "Substr: " << str.substr(0, 8) << endl; // "Computer"

    // 4. .compare(other) -> Returns 0 (equal), negative, or positive
    string s1 = "abc", s2 = "abcd";
    cout << "Compare: " << s1.compare(s2) << endl; // Negative (s1 < s2)

    // 5. .find(substring) -> Returns index or -1
    cout << "Found 'Science' at: " << str.find("Science") << endl; // 9

    //6. using == operator to compare two strings
    string s3 = "Hi", s4 = "Hello";
    if (s3 == s4) {
        cout << "s3 and s4 are equal" << endl; 
    } else {
        cout << "s3 and s4 are not equal" << endl;
    }
    return 0;
}