/*
 * Q1. SINGLE INHERITANCE  (one base class -> one derived class)
 *
 *     Person (Name, Age)  ->  Student (Roll Number, Course)
 */
#include <iostream>
using namespace std;

class Person                    // base class
{
protected:                      // protected -> usable inside derived classes
    string name;
    int age;

public:
    void acceptPerson()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age  : ";
        cin >> age;
    }

    void displayPerson()
    {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
    }
};

class Student : public Person   // derived class
{
    int rollNo;
    string course;

public:
    void accept()
    {
        acceptPerson();         // base class function reused
        cout << "Enter Roll No : ";
        cin >> rollNo;
        cout << "Enter Course  : ";
        cin >> course;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        displayPerson();        // base class function reused
        cout << "Roll No: " << rollNo << endl;
        cout << "Course : " << course << endl;
    }
};

int main()
{
    Student s;
    s.accept();
    s.display();

    return 0;
}
