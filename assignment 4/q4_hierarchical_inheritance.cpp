/*
 * Q4. HIERARCHICAL INHERITANCE  (TWO derived classes from ONE base class)
 *
 *                 Vehicle (Brand, Model)
 *                 /                   \
 *        Car (Doors)              Bike (Engine CC)
 */
#include <iostream>
using namespace std;

class Vehicle                   // base class
{
protected:
    string brand;
    string model;

public:
    void setVehicle(string b, string m)
    {
        brand = b;
        model = m;
    }

    void displayVehicle()
    {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
    }
};

class Car : public Vehicle      // first derived class
{
    int doors;

public:
    void setDoors(int d)
    {
        doors = d;
    }

    void display()
    {
        cout << "--- Car Details ---" << endl;
        displayVehicle();
        cout << "Number of Doors : " << doors << endl;
    }
};

class Bike : public Vehicle     // second derived class
{
    int engineCC;

public:
    void setEngine(int cc)
    {
        engineCC = cc;
    }

    void display()
    {
        cout << "--- Bike Details ---" << endl;
        displayVehicle();
        cout << "Engine Capacity : " << engineCC << " cc" << endl;
    }
};

int main()
{
    Car c;
    c.setVehicle("Hyundai", "Creta");
    c.setDoors(5);
    c.display();

    cout << endl;

    Bike b;
    b.setVehicle("Royal Enfield", "Classic 350");
    b.setEngine(350);
    b.display();

    return 0;
}
