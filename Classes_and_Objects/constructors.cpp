#include <iostream>
using namespace std;

class Phone {
private:
    int battery;
    int storage;

public:
    Phone() {                   // Default constructor     
        battery = 100;
        storage = 64;
        cout << "Default Phone created!" << endl;
    }

    void display() {
        cout << "Battery: " << battery << "%, Storage: " << storage << "GB" << endl;
    }
};

int main() {
    Phone p1; // Automatically calls Phone()

    p1.display();
    return 0;
}



