#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imaginary = i;
    }

    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = this->real + other.real;
        result.imaginary = this->imaginary + other.imaginary;
        return result;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);
    Complex sum = c1 + c2;

    cout << "First number = ";
    c1.display();

    cout << "Second number = ";
    c2.display();

    cout << "Result = ";
    sum.display();

    return 0;
}
