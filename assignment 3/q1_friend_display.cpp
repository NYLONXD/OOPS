/*
 * Q1. Class Student with private members name and marks.
 *     A FRIEND FUNCTION is used to access and display these private members.
 *
 *     A friend function is not a member of the class, but it is allowed to
 *     use the private data of the class because of the 'friend' keyword.
 */
#include <iostream>
using namespace std;

class Student
{
    string name;        // private
    int marks;          // private

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    // Declaring the friend function inside the class
    friend void display(Student s);
};

// Definition of the friend function (written outside, no :: and no 'friend')
void display(Student s)
{
    cout << "Name  : " << s.name << endl;      // private member accessed
    cout << "Marks : " << s.marks << endl;     // private member accessed
}

int main()
{
    Student s1("Aadarsh", 95);

    display(s1);       // called like a normal function, not s1.display()

    return 0;
}
