/*
 * Q8. Execution order of constructors and destructors when objects are created
 *     inside main() and inside a separate function.
 *
 *     An object created inside a function is destroyed as soon as that
 *     function ends, while objects of main() are destroyed at the end of main().
 */
#include <iostream>
using namespace std;

class Test
{
    string name;

public:
    Test(string n)
    {
        name = n;
        cout << "Constructor of " << name << endl;
    }

    ~Test()
    {
        cout << "Destructor of " << name << endl;
    }
};

void myFunction()
{
    cout << "  >> myFunction() starts" << endl;
    Test t1("Function-Object-1");
    Test t2("Function-Object-2");
    cout << "  >> myFunction() ends" << endl;
}   // t2 and t1 destroyed here

int main()
{
    cout << "--- main() starts ---" << endl;

    Test m1("Main-Object-1");

    myFunction();          // objects inside the function live only till it returns

    Test m2("Main-Object-2");

    cout << "--- main() ends ---" << endl;
    return 0;              // m2 and m1 destroyed here
}