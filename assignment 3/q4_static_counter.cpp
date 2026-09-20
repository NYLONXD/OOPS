/*
 * Q4. Class Student with a STATIC data member that counts how many
 *     objects have been created.
 *
 *     A static data member is shared by ALL objects of the class (only one
 *     copy exists) and must be defined once outside the class.
 */
#include <iostream>
using namespace std;

class Student
{
    string name;
    static int count;        // static data member (declaration)

public:
    Student(string n)
    {
        name = n;
        count++;             // increases every time an object is created
    }

    void display()
    {
        cout << "Student : " << name << endl;
    }

    void showCount()
    {
        cout << "Total objects created = " << count << endl;
    }
};

// Definition of the static member (memory is allotted here)
int Student::count = 0;

int main()
{
    Student s1("Aadarsh");
    Student s2("Rahul");
    Student s3("Priya");

    s1.display();
    s2.display();
    s3.display();

    s1.showCount();          // same value for every object
    s3.showCount();

    return 0;
}
