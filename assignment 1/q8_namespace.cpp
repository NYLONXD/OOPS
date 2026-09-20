/*
 * Q8. Implement namespace in a program to illustrate the use of same-name
 *     variables and functions in different sections / libraries of the code.
 */
#include <iostream>
#include <string>
using namespace std;

// ---------------- First "library" / section ----------------
namespace Physics
{
    double value = 9.8;                  // acceleration due to gravity

    void show()
    {
        cout << "Physics::show()  -> g = " << value << " m/s^2" << endl;
    }

    double area(double r)                // area of a circle
    {
        return 3.14159 * r * r;
    }
}

// ---------------- Second "library" / section ----------------
namespace Maths
{
    double value = 3.14159;              // value of pi

    void show()
    {
        cout << "Maths::show()    -> pi = " << value << endl;
    }

    double area(double l, double b)      // area of a rectangle
    {
        return l * b;
    }
}

// ---------------- Nested namespace ----------------
namespace College
{
    string name = "MAIT";

    namespace Department
    {
        string name = "CSE";             // same variable name, different scope

        void show()
        {
            cout << "College::Department::name = " << name << endl;
        }
    }
}

int main()
{
    // Same variable name 'value' in two namespaces -> resolved by scope resolution ::
    cout << "Physics::value = " << Physics::value << endl;
    cout << "Maths::value   = " << Maths::value   << endl;

    // Same function name show() in two namespaces
    Physics::show();
    Maths::show();

    // Same function name area() with different namespaces / parameters
    cout << "Area of circle (r=5)      = " << Physics::area(5)     << endl;
    cout << "Area of rectangle (4 x 6) = " << Maths::area(4, 6)    << endl;

    // Nested namespaces
    cout << "College::name             = " << College::name << endl;
    College::Department::show();

    // 'using' brings one namespace into the current scope
    {
        using namespace Maths;
        cout << "\nInside block with 'using namespace Maths':" << endl;
        cout << "value (Maths)   = " << value << endl;        // no :: needed
        cout << "value (Physics) = " << Physics::value << endl;
    }

    // Namespace alias
    namespace P = Physics;
    cout << "\nUsing alias P for Physics -> P::value = " << P::value << endl;

    return 0;
}
