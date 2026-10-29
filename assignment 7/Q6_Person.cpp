#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) {
        name = n;
        cout << "Person constructor called for " << name << endl;
    }

    virtual ~Person() {
        cout << "Person destructor called for " << name << endl;
    }
};

class Student : public Person {
private:
    double CGPA;
public:
    Student(string n, double cgpa) : Person(n) {
        CGPA = cgpa;
        cout << "Student constructor called for " << name << endl;
    }

    ~Student() {
        cout << "Student destructor called for " << name << endl;
    }

    void display() {
        cout << name << " CGPA: " << CGPA << endl;
    }
};

int main() {
    cout << "Creating student dynamically:" << endl;
    Person* ptr = new Student("Raj", 3.8);

    Student* studentPtr = dynamic_cast<Student*>(ptr);
    if (studentPtr) {
        studentPtr->display();
    }

    cout << "\nDeleting student:" << endl;
    delete ptr;

    return 0;
}
