/*
 * Q5. Difference between private and public access specifiers, and Q4 rewritten
 *     using a CLASS with private data members and a mix of private / public
 *     member functions.
 *
 *  PRIVATE  : members are accessible ONLY inside the member functions of the
 *             same class (and friend functions). They cannot be touched
 *             directly through an object, e.g. s.name is an ERROR outside.
 *             Used to hide/protect data  -> DATA ENCAPSULATION.
 *
 *  PUBLIC   : members are accessible from anywhere in the program using the
 *             object, e.g. s.displayDetails(). They form the INTERFACE of the
 *             class through which the outside world talks to the private data.
 *
 *  In a CLASS the default access specifier is PRIVATE,
 *  in a STRUCTURE the default access specifier is PUBLIC.
 */
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    // ---------------- Private data members ----------------
    string name;
    int    rollNo;
    string degree;
    string hostel;
    float  currentCGPA;

    // ---------------- Private member functions ----------------
    // Can be called only from inside other member functions of this class.
    bool isValidCGPA(float cgpa)
    {
        return (cgpa >= 0.0 && cgpa <= 10.0);
    }

    void printHeading(string title)
    {
        cout << "\n----- " << title << " -----" << endl;
    }

public:
    // ---------------- Public member functions ----------------
    void addDetails()
    {
        printHeading("Add Student Details");      // calling a PRIVATE function
        cout << "Enter Name        : ";
        getline(cin, name);
        cout << "Enter Roll No     : ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Degree      : ";
        getline(cin, degree);
        cout << "Enter Hostel      : ";
        getline(cin, hostel);
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
        cin.ignore();

        if (!isValidCGPA(currentCGPA))            // calling a PRIVATE function
        {
            cout << "Invalid CGPA! Setting it to 0." << endl;
            currentCGPA = 0;
        }
    }

    void updateDetails()
    {
        printHeading("Update Student Details");
        cout << "Enter new Name   : ";
        getline(cin, name);
        cout << "Enter new Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter new Degree : ";
        getline(cin, degree);
    }

    void updateCGPA()
    {
        float cgpa;
        cout << "\nEnter new CGPA: ";
        cin >> cgpa;
        cin.ignore();

        if (isValidCGPA(cgpa))                    // private validation used here
        {
            currentCGPA = cgpa;
            cout << "CGPA updated successfully." << endl;
        }
        else
            cout << "Invalid CGPA (must be between 0 and 10). Not updated." << endl;
    }

    void updateHostel()
    {
        cout << "\nEnter new Hostel: ";
        getline(cin, hostel);
        cout << "Hostel updated successfully." << endl;
    }

    void displayDetails()
    {
        printHeading("Student Details");
        cout << "Name        : " << name        << endl;
        cout << "Roll No     : " << rollNo      << endl;
        cout << "Degree      : " << degree      << endl;
        cout << "Hostel      : " << hostel      << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main()
{
    Student s;
    int choice;

    // s.name = "Aadarsh";        // ERROR: 'name' is private
    // s.isValidCGPA(9.0);        // ERROR: 'isValidCGPA' is private

    do
    {
        cout << "\n====== MENU ======" << endl;
        cout << "1. Add Details\n2. Update Details\n3. Update CGPA\n"
             << "4. Update Hostel\n5. Display Details\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1: s.addDetails();     break;
            case 2: s.updateDetails();  break;
            case 3: s.updateCGPA();     break;
            case 4: s.updateHostel();   break;
            case 5: s.displayDetails(); break;
            case 0: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}
