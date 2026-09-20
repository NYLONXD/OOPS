/*
 * Q1. Class Student with name and rollNo.
 *     Use a DEFAULT CONSTRUCTOR to initialize the values and display them.
 */
#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;

public:
    // Default constructor (takes no arguments, called automatically)
    Student()
    {
        name = "Aadarsh";
        rollNo = 101;
        cout << "Default constructor called" << endl;
    }

    void display()
    {
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
    }
};

int main()
{
    Student s;        // default constructor runs here
    s.display();

    return 0;
}
