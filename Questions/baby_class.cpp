#include <iostream>
#include <string>
using namespace std;

class Baby {
public:
    string name;
    int age;

    Baby() : name(""), age(0){}
    Baby(string n , int a ) : name(n) , age (a){} 


    void display() {
        cout << "Name: " << name << " | Age: " << age << " months" << endl;
    }
};

int main(){

    Baby babies [4];

    cout << "Enter details for 4 babies:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Baby " << (i + 1) << " (Name Age): ";
        cin >> babies[i].name >> babies[i].age;
    }

    int totalAge = 0;
    int oldestIndex = 0;

    for(int i=0; i<4; i++){
        totalAge += babies[i].age;

        if(babies[i].age> babies[oldestIndex].age){
            oldestIndex = i;
        }
    }

    cout << "\nAverage Age: " << (totalAge / 4.0) << " months\n";
    cout << "Oldest Baby: ";
    babies[oldestIndex].display();

    string searchName;
    cout << "\nEnter name to search: ";
    cin >> searchName;

    bool found = false;

    for(int i =0 ; i<4 ; i++){
        if(babies[i].name == searchName){
            cout << "Details: ";
            babies[i].display();
            found = true;
            break;
        }
    }

    if(found==false) cout << "Baby was not Found\n";

    return 0;
}
