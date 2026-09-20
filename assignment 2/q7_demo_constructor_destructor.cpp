/*
 * Q7. Class Demo that prints a message in its constructor and in its destructor.
 *     Multiple objects are created to observe the ORDER of execution.
 *
 *     Rule: constructors run in the order the objects are created,
 *           destructors run in the REVERSE order (last created is destroyed first).
 */
#include <iostream>
using namespace std;

class Demo
{
    int num;

public:
    Demo(int n)
    {
        num = n;
        cout << "Constructor called for object " << num << endl;
    }

    ~Demo()
    {
        cout << "Destructor called for object " << num << endl;
    }
};

int main()
{
    cout << "--- main() starts ---" << endl;

    Demo d1(1);
    Demo d2(2);
    Demo d3(3);

    cout << "--- main() ends ---" << endl;

    return 0;      // d3, d2, d1 are destroyed here (reverse order)
}
