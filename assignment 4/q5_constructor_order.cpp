/*
 * Q5. Order of constructor execution in inheritance.
 *
 *     Base class College (College Name)  ->  Derived class Department (Dept Name)
 *
 *     Rule: the BASE class constructor always runs FIRST, then the derived
 *           class constructor. Destructors run in the opposite order.
 */
#include <iostream>
using namespace std;

class College                   // base class
{
protected:
    string collegeName;

public:
    College(string c)
    {
        collegeName = c;
        cout << "College constructor called" << endl;
    }

    ~College()
    {
        cout << "College destructor called" << endl;
    }
};

class Department : public College    // derived class
{
    string deptName;

public:
    // The base constructor is called through the initialization list : College(c)
    Department(string c, string d) : College(c)
    {
        deptName = d;
        cout << "Department constructor called" << endl;
    }

    void display()
    {
        cout << "\nCollege Name    : " << collegeName << endl;
        cout << "Department Name : " << deptName << endl << endl;
    }

    ~Department()
    {
        cout << "Department destructor called" << endl;
    }
};

int main()
{
    Department d("MAIT", "Computer Science");
    d.display();

    return 0;
}

/*  OUTPUT:
    College constructor called
    Department constructor called

    College Name    : MAIT
    Department Name : Computer Science

    Department destructor called
    College destructor called
*/
