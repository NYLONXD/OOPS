/*
 * Q5. Class BankAccount with:
 *       private : accountNo, balance
 *       static  : totalAccounts
 *       - constructor to initialize the account
 *       - friend function to display the private details
 *       - static member function to display the total number of accounts
 */
#include <iostream>
using namespace std;

class BankAccount
{
    int accountNo;              // private
    float balance;              // private
    static int totalAccounts;   // static data member

public:
    // Constructor
    BankAccount(int accNo, float bal)
    {
        accountNo = accNo;
        balance = bal;
        totalAccounts++;
    }

    // Friend function declaration
    friend void showAccount(BankAccount b);

    // Static member function (can use ONLY static data members)
    static void showTotalAccounts()
    {
        cout << "Total accounts created = " << totalAccounts << endl;
    }
};

// Defining the static data member
int BankAccount::totalAccounts = 0;

// Friend function definition
void showAccount(BankAccount b)
{
    cout << "Account No : " << b.accountNo
         << " | Balance : " << b.balance << endl;
}

int main()
{
    BankAccount a1(101, 50000);
    BankAccount a2(102, 75000);
    BankAccount a3(103, 120000);

    cout << "--- Account details (using friend function) ---" << endl;
    showAccount(a1);
    showAccount(a2);
    showAccount(a3);

    cout << "\n--- Using static member function ---" << endl;
    BankAccount::showTotalAccounts();   // called with the class name

    return 0;
}
