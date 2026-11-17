#include <iostream>
using namespace std;        

class car {
public:
    int speed;
    int fuel;    
    // car() {     
    //     speed = 0;
    //     fuel = 100;
    //     cout << "Default Car created!" << endl;
    // }

    void display() {
        cout << "Speed: " << speed << " km/h, Fuel: " << fuel << "%" << endl;
    }
};

int main() {
    car c1; // Automatically calls car()
    c1.speed = 60;
    c1.fuel = 80;

    car c2; // Automatically calls car()
    c2.speed = 100;

    c1.display();
    c2.display();
    return 0;
}
