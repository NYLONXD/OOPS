#include <iostream>
using namespace std;

class Area {
public:
    double calculate(double side) {
        return side * side;
    }

    double calculate(double length, double width) {
        return length * width;
    }

    
    double calculate(double radius, int isCircle) {
        if (isCircle == 1) {
            return 3.14159 * radius * radius;
        }
        return 0;
    }
};

int main() {
    Area area;

    // Calculate area of square with side = 5
    cout << "Area of Square (side=5): " << area.calculate(5) << endl;

    // Calculate area of rectangle with length = 5, width = 10
    cout << "Area of Rectangle (5x10): " << area.calculate(5, 10) << endl;

   
    cout << "Area of Circle (radius=7): " << area.calculate(7, 1) << endl;

    return 0;
}
