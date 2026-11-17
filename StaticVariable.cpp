#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    string name;       // Normal variable: each player has their OWN name
    static int count;  // Static variable: SHARED by ALL players!

    Player(string name) {
        this->name = name;
        count++; // Whenever a player joins, increment the SHARED count
    }
};

// You must initialize static variables outside the class:
int Player::count = 0;

int main() {
    Player p1("Mario");
    Player p2("Luigi");
    Player p3("Bowser");

    // Each player has their own name:
    cout << "Player 1: " << p1.name << endl;
    cout << "Player 2: " << p2.name << endl;

    // But 'count' is shared by all of them!
    cout << "Total players created: " << Player::count << endl;

    return 0;
}