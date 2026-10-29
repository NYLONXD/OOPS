#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v = 0) {
        value = v;
    }

    Number operator+(const Number& other) const {
        Number result;
        result.value = this->value + other.value;
        return result;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(15);
    Number num2(25);
    Number sum = num1 + num2;

    cout << "First Number: ";
    num1.display();

    cout << "Second Number: ";
    num2.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}
