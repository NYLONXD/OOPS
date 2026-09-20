/*
 * Q3. Class Employee with name, id and salary.
 *     Initialize using a PARAMETERIZED CONSTRUCTOR and display the details.
 */
#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    float salary;

public:
    Employee(string n, int i, float s)
    {
        name = n;
        id = i;
        salary = s;
    }

    void display()
    {
        cout << "Name   : " << name << endl;
        cout << "Id     : " << id << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Employee e1("Aadarsh", 1, 50000);
    Employee e2("Rahul", 2, 60000);

    cout << "--- Employee 1 ---" << endl;
    e1.display();

    cout << "\n--- Employee 2 ---" << endl;
    e2.display();

    return 0;
}
