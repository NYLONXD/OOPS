#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;
public:
    Employee(string n, double sal) {
        name = n;
        basicSalary = sal;
    }

    virtual void calculateSalary() {
        cout << name << " salary: " << basicSalary << endl;
    }
};

class PermanentEmployee : public Employee {
public:
    PermanentEmployee(string n, double sal) : Employee(n, sal) {
    }

    void calculateSalary() {
        double totalSalary = basicSalary + (basicSalary * 0.10) + (basicSalary * 0.05);
        cout << name << " total salary (with bonus and allowance): " << totalSalary << endl;
    }
};

class ContractEmployee : public Employee {
public:
    ContractEmployee(string n, double sal) : Employee(n, sal) {
    }

    void calculateSalary() {
        double totalSalary = basicSalary - (basicSalary * 0.05);
        cout << name << " total salary (with deduction): " << totalSalary << endl;
    }
};

int main() {
    Employee* ptr;

    PermanentEmployee pe("John", 50000);
    ContractEmployee ce("Alice", 40000);

    ptr = &pe;
    ptr->calculateSalary();

    ptr = &ce;
    ptr->calculateSalary();

    return 0;
}
