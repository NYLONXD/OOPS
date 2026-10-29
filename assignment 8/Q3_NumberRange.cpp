#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    try {
        if (number < 0) {
            throw "Error: Number is negative!";
        }
        if (number > 100) {
            throw "Error: Number is greater than 100!";
        }
        cout << "Number is valid: " << number << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}
