#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() {
        count = 0;
    }

    Counter operator++() {
        count++;
        return *this;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;

    cout << "Before increment:" << endl;
    c.display();

    ++c;

    cout << "After increment:" << endl;
    c.display();

    return 0;
}
