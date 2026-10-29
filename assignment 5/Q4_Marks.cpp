#include <iostream>
using namespace std;

class Marks {
public:
    // Display marks in one subject
    void result(double marks1) {
        cout << "Marks in Subject 1: " << marks1 << endl;
    }

    // Calculate average of two subjects
    void result(double marks1, double marks2) {
        double avg = (marks1 + marks2) / 2.0;
        cout << "Average of 2 Subjects: " << avg << endl;
    }

    // Calculate average of three subjects
    void result(double marks1, double marks2, double marks3) {
        double avg = (marks1 + marks2 + marks3) / 3.0;
        cout << "Average of 3 Subjects: " << avg << endl;
    }
};

int main() {
    Marks student;

    // Display marks in one subject
    student.result(85);

    // Calculate average of two subjects
    student.result(85, 90);

    // Calculate average of three subjects
    student.result(85, 90, 88);

    return 0;
}
