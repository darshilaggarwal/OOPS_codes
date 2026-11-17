#include <iostream>
using namespace std;

class MathHelper {
public:
    // STATIC functions: They belong to the CLASS, not an object
    static int add(int a, int b) {
        return a + b;
    }

    static int square(int num) {
        return num * num;
    }
};

int main() {
    // Notice: We did NOT create any object! (No 'MathHelper m;')
    // We call the function directly using: ClassName::FunctionName()

    int sum = MathHelper::add(10, 20);
    int sq  = MathHelper::square(5);

    cout << "Sum: " << sum << endl;
    cout << "Square of 5: " << sq << endl;

    return 0;
}