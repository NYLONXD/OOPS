/*
 * Q3. Class Employee with private member salary.
 *     A friend function compares the salary of TWO objects and displays
 *     the higher one. (A friend function can take more than one object.)
 */
#include <iostream>
using namespace std;

class Employee
{
    string name;
    float salary;

public:
    Employee(string n, float s)
    {
        name = n;
        salary = s;
    }

    friend void compare(Employee e1, Employee e2);
};

void compare(Employee e1, Employee e2)
{
    cout << e1.name << "'s salary = " << e1.salary << endl;
    cout << e2.name << "'s salary = " << e2.salary << endl;

    if (e1.salary > e2.salary)
        cout << "Higher salary : " << e1.name << " (" << e1.salary << ")" << endl;
    else if (e2.salary > e1.salary)
        cout << "Higher salary : " << e2.name << " (" << e2.salary << ")" << endl;
    else
        cout << "Both have the same salary." << endl;
}

int main()
{
    Employee e1("Aadarsh", 50000);
    Employee e2("Rahul", 65000);

    compare(e1, e2);

    return 0;
}
