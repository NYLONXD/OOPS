#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v = 0) {
        value = v;
    }

    Number operator--() {
        value--;
        return *this;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(10);

    cout << "Before decrement:" << endl;
    num.display();

    --num;

    cout << "After decrement:" << endl;
    num.display();

    return 0;
}
