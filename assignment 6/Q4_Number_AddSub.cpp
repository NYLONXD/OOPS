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

    Number operator-(const Number& other) const {
        Number result;
        result.value = this->value - other.value;
        return result;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(50);
    Number num2(20);

    Number sum = num1 + num2;
    Number diff = num1 - num2;

    cout << "First Number: ";
    num1.display();

    cout << "Second Number: ";
    num2.display();

    cout << "Addition Result: ";
    sum.display();

    cout << "Subtraction Result: ";
    diff.display();

    return 0;
}
