#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Shape area" << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Rectangle area: " << (length * width) << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }

    void area() {
        cout << "Circle area: " << (3.14159 * radius * radius) << endl;
    }
};

int main() {
    Shape* ptr;

    Rectangle rect(5, 10);
    Circle circle(7);

    ptr = &rect;
    ptr->area();

    ptr = &circle;
    ptr->area();

    return 0;
}
