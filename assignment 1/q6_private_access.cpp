/*
 * Q6. Code snippet that illustrates:
 *     (a) Calling of private member functions inside a public member function
 *     (b) Accessing private data members inside a public member function
 */
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    // ---- (b) private DATA members ----
    string accHolder;
    long   accNumber;
    double balance;

    // ---- (a) private MEMBER FUNCTIONS ----
    double calculateInterest()
    {
        return balance * 0.04;          // private function accessing private data
    }

    void showSecretCode()
    {
        cout << "Internal security code : " << (accNumber % 9999) << endl;
    }

public:
    void setData(string name, long number, double bal)
    {
        // (b) private data members accessed inside a PUBLIC function
        accHolder = name;
        accNumber = number;
        balance   = bal;
    }

    void display()
    {
        // (b) accessing private data members
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Holder : " << accHolder << endl;
        cout << "Account Number : " << accNumber << endl;
        cout << "Balance        : " << balance   << endl;

        // (a) calling private member functions from a PUBLIC member function
        cout << "Interest earned: " << calculateInterest() << endl;
        showSecretCode();
    }
};

int main()
{
    BankAccount acc;

    acc.setData("Aadarsh Mangla", 100200300, 50000);
    acc.display();

    /*  The following lines are ILLEGAL (uncomment to see the compiler error)
     *  because private members cannot be accessed from outside the class:
     *
     *  acc.balance = 99999;          // error: 'balance' is private
     *  acc.calculateInterest();      // error: 'calculateInterest' is private
     *  acc.showSecretCode();         // error: 'showSecretCode' is private
     */

    return 0;
}
