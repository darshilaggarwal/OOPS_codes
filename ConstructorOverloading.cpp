#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // 1. Default Constructor (0 parameters)
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called (0x0)\n";
    }

    // 2. Overloaded Constructor (1 parameter - for a Square)
    Rectangle(int side) {
        length = side;
        width = side;
        cout << "1-parameter constructor called (Square: " << side << "x" << side << ")\n";
    }

    // 3. Overloaded Constructor (2 parameters - for a standard Rectangle)
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "2-parameter constructor called (Rectangle: " << l << "x" << w << ")\n";
    }

    int getArea() {                  //instance method to calculate area
        return length * width;
    }
};

int main() {
    // Calls Constructor 1 (0 arguments)
    Rectangle r1; 
    cout << "Area: " << r1.getArea() << "\n\n";

    // Calls Constructor 2 (1 argument)
    Rectangle r2(5); 
    cout << "Area: " << r2.getArea() << "\n\n";

    // Calls Constructor 3 (2 arguments)
    Rectangle r3(4, 6); 
    cout << "Area: " << r3.getArea() << "\n\n";

    return 0;
}