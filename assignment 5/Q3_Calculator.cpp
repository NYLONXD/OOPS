#include <iostream>
using namespace std;

class Calculator {
public:
    // Sum of two integers
    int sum(int a, int b) {
        return a + b;
    }

    // Sum of three integers
    int sum(int a, int b, int c) {
        return a + b + c;
    }

    // Sum of two decimal numbers
    double sum(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    // Test sum of two integers
    cout << "Sum of 10 and 20: " << calc.sum(10, 20) << endl;

    // Test sum of three integers
    cout << "Sum of 5, 15, and 25: " << calc.sum(5, 15, 25) << endl;

    // Test sum of two decimal numbers
    cout << "Sum of 3.5 and 2.5: " << calc.sum(3.5, 2.5) << endl;

    return 0;
}
