#include <iostream>
using namespace std;

class LibraryAccount {
private:
    int availableBooks;
public:
    LibraryAccount(int books) {
        availableBooks = books;
    }

    void issueBook(int numBooks) {
        try {
            if (numBooks > availableBooks) {
                throw "Error: Not enough books available!";
            }
            availableBooks -= numBooks;
            cout << "Successfully issued " << numBooks << " book(s)" << endl;
            cout << "Remaining books: " << availableBooks << endl;
        }
        catch (const char* msg) {
            cout << msg << endl;
        }
    }

    void displayAvailable() {
        cout << "Available books: " << availableBooks << endl;
    }
};

int main() {
    LibraryAccount library(5);

    library.displayAvailable();

    cout << "Attempting to issue 3 books:" << endl;
    library.issueBook(3);

    cout << "\nAttempting to issue 5 books:" << endl;
    library.issueBook(5);

    cout << "\nAttempting to issue 2 books:" << endl;
    library.issueBook(2);

    return 0;
}
