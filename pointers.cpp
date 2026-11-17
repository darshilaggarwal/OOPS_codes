#include <iostream>
using namespace std;
int main() {

    int a = 10;
    int b = 20;
    int* ptrA = &a; 
    int* ptrB = &b; 
    cout << "Value of a: " << *ptrA << endl; //10
    cout << "Value of b: " << *ptrB << endl; //20
    cout << "Address of a: " << ptrA << endl; 
    cout << "Address of b: " << ptrB << endl;
    *ptrA = 30;
    *ptrB = 40;

    cout << "New value of a: " << a << endl;
    cout << "New value of b: " << b << endl;

    return 0;
}