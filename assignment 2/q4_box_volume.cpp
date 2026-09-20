/*
 * Q4. Class Box with length, width and height.
 *     Has a default constructor, a parameterized constructor and a
 *     function to calculate and display the volume.
 */
#include <iostream>
using namespace std;

class Box
{
    float length, width, height;

public:
    // Default constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
        cout << "Parameterized constructor called" << endl;
    }

    void volume()
    {
        cout << "Box (" << length << " x " << width << " x " << height
             << ") -> Volume = " << length * width * height << endl;
    }
};

int main()
{
    Box b1;                  // default constructor
    b1.volume();

    Box b2(4, 5, 6);         // parameterized constructor
    b2.volume();

    return 0;
}
