/*
 * Q6. Class Complex with real and imaginary data members.
 *     Has a default constructor, a parameterized constructor and display().
 */
#include <iostream>
using namespace std;

class Complex
{
    float real, imaginary;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(float r, float i)
    {
        real = r;
        imaginary = i;
    }

    void display()
    {
        if (imaginary < 0)
            cout << real << " - " << (-imaginary) << "i" << endl;
        else
            cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1;                  // default constructor -> 0 + 0i
    Complex c2(3, 4);            // parameterized       -> 3 + 4i
    Complex c3(5, -2);           // parameterized       -> 5 - 2i

    cout << "c1 = ";  c1.display();
    cout << "c2 = ";  c2.display();
    cout << "c3 = ";  c3.display();

    return 0;
}
