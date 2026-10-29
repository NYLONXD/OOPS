#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayInfo() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void displayInfo() {
        cout << "Car: 4 wheels, runs on fuel, comfortable seating" << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayInfo() {
        cout << "Bike: 2 wheels, fast and quick, easy to maneuver" << endl;
    }
};

class Bus : public Vehicle {
public:
    void displayInfo() {
        cout << "Bus: 6+ wheels, carries many passengers, public transport" << endl;
    }
};

int main() {
    Vehicle* ptr;

    Car car;
    Bike bike;
    Bus bus;

    ptr = &car;
    ptr->displayInfo();

    ptr = &bike;
    ptr->displayInfo();

    ptr = &bus;
    ptr->displayInfo();

    return 0;
}
