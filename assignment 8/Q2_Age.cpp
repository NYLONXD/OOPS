#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0) {
            throw "Error: Age cannot be negative!";
        }
        cout << "Your age is: " << age << " years" << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}
