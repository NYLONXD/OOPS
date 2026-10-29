#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    // Overloaded display() function for integer
    void display(int num) {
        cout << "Integer: " << num << endl;
    }

    // Overloaded display() function for double
    void display(double num) {
        cout << "Double: " << num << endl;
    }

    // Overloaded display() function for string
    void display(string str) {
        cout << "String: " << str << endl;
    }
};

int main() {
    Print p;

    // Call display with different data types
    p.display(42);                      // Calls display(int)
    p.display(3.14);                    // Calls display(double)
    p.display("Hello World");           // Calls display(string)

    return 0;
}
