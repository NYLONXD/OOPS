#include <iostream>
using namespace std;

class Maximum {
public:
    // Find greater of two integers
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }

    // Find greatest of three integers
    int findMax(int a, int b, int c) {
        if (a >= b && a >= c) return a;
        if (b >= a && b >= c) return b;
        return c;
    }

    // Find greater of two decimal numbers
    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Maximum max;

    // Find greater of two integers
    cout << "Maximum of 10 and 20: " << max.findMax(10, 20) << endl;

    // Find greatest of three integers
    cout << "Maximum of 15, 25, and 20: " << max.findMax(15, 25, 20) << endl;

    // Find greater of two decimal numbers
    cout << "Maximum of 5.5 and 3.2: " << max.findMax(5.5, 3.2) << endl;

    return 0;
}
