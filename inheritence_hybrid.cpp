#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    void setRoll(int r) { rollNo = r; }
};

// Use 'virtual' to prevent the Diamond Ambiguity error!
class Test : virtual public Student {
public:
    double testScore;
    void setTestScore(double s) { testScore = s; }
};

class Sports : virtual public Student {
public:
    double sportsScore;
    void setSportsScore(double sp) { sportsScore = sp; }
};

// Combines Test and Sports into one hybrid class
class Result : public Test, public Sports {
public:
    void printReport() {
        double total = testScore + sportsScore;
        cout << "Roll Number  : " << rollNo << endl;
        cout << "Test Score   : " << testScore << endl;
        cout << "Sports Score : " << sportsScore << endl;
        cout << "Total Marks  : " << total << endl;
    }
};

int main() {
    Result r;
    r.setRoll(101);
    r.setTestScore(88.5);
    r.setSportsScore(9.5);
    r.printReport();

    return 0;
}