#include <iostream>
using namespace std;    
int main() {

    int arr[5] = {10, 20, 30, 40, 50}; 

    cout << "Elements of the array: " << endl;
    
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << "total elements of the array: " << sizeof(arr)/sizeof(arr[0]) << endl; 

    return 0;
}