#include <iostream>
#include <string>
using namespace std;

class Shape {           // parent class
public:
    string color;
    void setColor(string c) {
        color = c;
    }
};

class Circle : public Shape {     //child 1
public:
    void drawCircle() {
        cout << "Drawing a " << color << " Circle (O)\n";
    }
};

class Rectangle : public Shape {       // child 2
public:
    void drawRectangle() {
        cout << "Drawing a " << color << " Rectangle ([]))\n";
    }
};

int main() {
    Circle c;
    c.setColor("Red"); // Shared from Shape
    c.drawCircle();

    Rectangle r;
    r.setColor("Blue"); // Shared from Shape
    r.drawRectangle();

    return 0;
}