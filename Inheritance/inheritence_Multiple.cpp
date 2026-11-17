#include <iostream>
using namespace std;

class Printer {        //parent 1
public:
    void printDocument() {
        cout << "Printer: Printing document on paper...\n";
    }
};

class Scanner {         //parent 2
public:
    void scanDocument() {
        cout << "Scanner: Scanning document into digital copy...\n";
    }
};

// Inherits from BOTH Printer and Scanner
class AllInOneMachine : public Printer, public Scanner {
public:
    void copyDocument() {
        cout << "AllInOneMachine: Performing photocopy operation!\n";
    }
};

int main() {
    AllInOneMachine machine;
    machine.printDocument(); // From Printer
    machine.scanDocument();  // From Scanner
    machine.copyDocument();  // From AllInOneMachine
    return 0;
}