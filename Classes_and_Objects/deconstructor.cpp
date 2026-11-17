#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor: runs automatically when the object is created
    Demo() {
        cout << "1. Constructor: Object created!\n";
    }

    // Destructor: runs automatically when the object is destroyed
    ~Demo() {
        cout << "3. Destructor: Object destroyed!\n";
    }
};

int main() {
    Demo d; // Object is created here (Constructor runs)

    cout << "2. Inside the main function...\n";

    return 0; // Function ends -> Object goes out of scope -> Destructor runs automatically!
}