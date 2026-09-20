/*
 * Q5. Constructor OVERLOADING using class Student:
 *       - default constructor
 *       - constructor with name and roll number
 *       - constructor with name, roll number and CGPA
 */
#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;
    float cgpa;

public:
    // 1. Default constructor
    Student()
    {
        name = "Not Assigned";
        rollNo = 0;
        cgpa = 0.0;
    }

    // 2. Constructor with two arguments
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        cgpa = 0.0;
    }

    // 3. Constructor with three arguments
    Student(string n, int r, float c)
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    void display()
    {
        cout << "Name : " << name
             << " | Roll No : " << rollNo
             << " | CGPA : " << cgpa << endl;
    }
};

int main()
{
    Student s1;                           // default constructor
    Student s2("Aadarsh", 101);           // 2 arguments
    Student s3("Rahul", 102, 8.5);        // 3 arguments

    cout << "Object s1 -> ";  s1.display();
    cout << "Object s2 -> ";  s2.display();
    cout << "Object s3 -> ";  s3.display();

    return 0;
}
