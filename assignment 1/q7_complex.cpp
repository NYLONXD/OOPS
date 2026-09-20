/*
 * Q7. Class Complex with private properties (real, imaginary) and public methods
 *        void    set()               -> initialise object values
 *        void    display()           -> display the complex number
 *        Complex sum(Complex)        -> adds two complex objects, returns object
 *        void    sum(Complex,Complex)-> (overloaded) stores the sum in the caller
 */
#include <iostream>
using namespace std;

class Complex
{
private:                       // properties -> private
    float real;
    float imaginary;

public:                        // member functions -> public
    void set()
    {
        cout << "Enter real part     : ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void set(float r, float i)             // overloaded set (without input)
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

    // Returns a Complex object as the result -> c3 = c1.sum(c2);
    Complex sum(Complex c)
    {
        Complex temp;
        temp.real      = real + c.real;          // members of another object of
        temp.imaginary = imaginary + c.imaginary; // the SAME class are accessible
        return temp;
    }

    // void version -> c3.sum(c1, c2);
    void sum(Complex c1, Complex c2)
    {
        real      = c1.real + c2.real;
        imaginary = c1.imaginary + c2.imaginary;
    }
};

int main()
{
    Complex c1, c2, c3, c4;

    cout << "--- First complex number ---" << endl;
    c1.set();
    cout << "--- Second complex number ---" << endl;
    c2.set();

    cout << "\nFirst  number : ";  c1.display();
    cout << "Second number : ";    c2.display();

    c3 = c1.sum(c2);                 // value returning version
    cout << "\nSum (returning object) : ";  c3.display();

    c4.sum(c1, c2);                  // void version
    cout << "Sum (void version)     : ";    c4.display();

    return 0;
}
