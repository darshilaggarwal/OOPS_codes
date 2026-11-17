#include <iostream>
using namespace std;

class Player {
public:
    int level;
    int coins;
};

int main() {
    Player* p1 = new Player();
    Player* p2 = new Player();

    p1->level = 1;
    p1->coins = 100;

    p2->level = 5;
    p2->coins = 500;

    Player* p3 = p1;   
    p1 = p2;           

    p1->coins += 50;   
    p3->level += 2;    

    p2 = p3;           
    p2->coins = 999;   

    cout << "p1: Level " << p1->level << ", Coins: " << p1->coins << endl; 
    cout << "p2: Level " << p2->level << ", Coins: " << p2->coins << endl;
    cout << "p3: Level " << p3->level << ", Coins: " << p3->coins << endl;

    delete p1;
    delete p2;
    return 0;
}