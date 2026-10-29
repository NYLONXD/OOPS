#include <iostream>
using namespace std;

class Month {
public:
    virtual void show() {
        cout << "Current month is October" << endl;
    }
};

class NextMonth : public Month {
public:
    void show() {
        cout << "Next month will be November" << endl;
    }
};

int main() {
    Month m;
    m.show();

    NextMonth nm;
    nm.show();

    Month* ptr = &nm;
    ptr->show();

    return 0;
}
