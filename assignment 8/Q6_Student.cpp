#include <iostream>
using namespace std;

class Student {
private:
    double marks[5];
public:
    void inputMarks() {
        try {
            cout << "Enter marks for 5 subjects: " << endl;
            for (int i = 0; i < 5; i++) {
                cout << "Subject " << (i + 1) << ": ";
                cin >> marks[i];

                if (marks[i] < 0 || marks[i] > 100) {
                    throw "Error: Mark must be between 0 and 100!";
                }
            }
            displayAverage();
        }
        catch (const char* msg) {
            cout << msg << endl;
        }
    }

    void displayAverage() {
        double total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        double average = total / 5;
        cout << "Average marks: " << average << endl;
    }
};

int main() {
    Student student;
    student.inputMarks();

    return 0;
}
