/*
 * Q4. Create a structure in C++ containing the details of a Student
 *     Data members : Name, Roll No, Degree, Hostel, CurrentCGPA
 *     Member funcs : addDetails(), updateDetails(), updateCGPA(),
 *                    updateHostel(), displayDetails()
 *
 * NOTE: In a C++ structure every member is PUBLIC by default.
 */
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    // ---------------- Data Members (properties) ----------------
    string name;
    int    rollNo;
    string degree;
    string hostel;
    float  currentCGPA;

    // ---------------- Member Functions (behaviour) ----------------
    void addDetails()
    {
        cout << "\n----- Add Student Details -----" << endl;
        cout << "Enter Name        : ";
        getline(cin, name);
        cout << "Enter Roll No     : ";
        cin >> rollNo;
        cin.ignore();                  // flush the newline left by cin
        cout << "Enter Degree      : ";
        getline(cin, degree);
        cout << "Enter Hostel      : ";
        getline(cin, hostel);
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
        cin.ignore();
    }

    void updateDetails()               // update name, roll no and degree
    {
        cout << "\n----- Update Student Details -----" << endl;
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
        cout << "\nEnter new CGPA: ";
        cin >> currentCGPA;
        cin.ignore();
        cout << "CGPA updated successfully." << endl;
    }

    void updateHostel()
    {
        cout << "\nEnter new Hostel: ";
        getline(cin, hostel);
        cout << "Hostel updated successfully." << endl;
    }

    void displayDetails()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name        : " << name        << endl;
        cout << "Roll No     : " << rollNo      << endl;
        cout << "Degree      : " << degree      << endl;
        cout << "Hostel      : " << hostel      << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main()
{
    Student s;                 // object (variable) of structure Student
    int choice;

    do
    {
        cout << "\n====== MENU ======" << endl;
        cout << "1. Add Details\n2. Update Details\n3. Update CGPA\n"
             << "4. Update Hostel\n5. Display Details\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();          // remove newline before any getline

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
