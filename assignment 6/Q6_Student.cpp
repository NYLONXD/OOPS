#include <iostream>
using namespace std;

class Student {
private:
    double CGPA;
public:
    Student(double cgpa = 0) {
        CGPA = cgpa;
    }

    bool operator==(const Student& other) const {
        return this->CGPA == other.CGPA;
    }

    bool operator>(const Student& other) const {
        return this->CGPA > other.CGPA;
    }

    void display() {
        cout << "CGPA: " << CGPA << endl;
    }
};

int main() {
    Student s1(3.8);
    Student s2(3.8);
    Student s3(3.5);

    cout << "Student 1 CGPA: " << 3.8 << endl;
    cout << "Student 2 CGPA: " << 3.8 << endl;
    cout << "Student 3 CGPA: " << 3.5 << endl;
    cout << endl;

    if (s1 == s2) {
        cout << "Student 1 and Student 2 have the same CGPA" << endl;
    } else {
        cout << "Student 1 and Student 2 have different CGPA" << endl;
    }

    if (s1 > s3) {
        cout << "Student 1 has higher CGPA than Student 3" << endl;
    } else {
        cout << "Student 1 does not have higher CGPA than Student 3" << endl;
    }

    return 0;
}
