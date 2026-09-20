/*
 * Q2. MULTILEVEL INHERITANCE  (a chain of classes)
 *
 *     Person (Name) -> Employee (Employee ID) -> Manager (Department)
 */
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }
};

class Employee : public Person      // derived from Person
{
protected:
    int empId;

public:
    void setId(int id)
    {
        empId = id;
    }
};

class Manager : public Employee     // derived from Employee
{
    string department;

public:
    void setDepartment(string d)
    {
        department = d;
    }

    void display()
    {
        cout << "--- Manager Details ---" << endl;
        cout << "Name        : " << name << endl;        // from Person
        cout << "Employee ID : " << empId << endl;       // from Employee
        cout << "Department  : " << department << endl;  // own member
    }
};

int main()
{
    Manager m;

    m.setName("Aadarsh");
    m.setId(101);
    m.setDepartment("Sales");

    m.display();

    return 0;
}
