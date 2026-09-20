/*
 * Q2. Class Number with private members a and b.
 *     A friend function accesses them and displays their sum.
 */
#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    Number(int x, int y)
    {
        a = x;
        b = y;
    }

    friend void showSum(Number n);
};

void showSum(Number n)
{
    cout << "a = " << n.a << endl;
    cout << "b = " << n.b << endl;
    cout << "Sum = " << n.a + n.b << endl;
}

int main()
{
    Number n1(10, 20);
    showSum(n1);

    return 0;
}
