/*
 * Q2. Class Rectangle with length and breadth.
 *     Use a PARAMETERIZED CONSTRUCTOR and display the area.
 */
#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:
    // Parameterized constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void display()
    {
        cout << "Length  : " << length << endl;
        cout << "Breadth : " << breadth << endl;
        cout << "Area    : " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r(10, 5);      // values passed to the constructor
    r.display();

    return 0;
}
