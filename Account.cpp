#include <iostream>
using namespace std;

class Account
{
protected:
    string accountNumber;
    string pin;
    double balance;

public:
    Account(string accNum, string pin)
    {
        this->accountNumber = accNum;
        this->pin = pin;
        this->balance = 0.0;
    }

    virtual void deposit(double amt)
    {
        balance += amt;
        cout << "Deposited ₹" << amt << ". New Balance: ₹" << balance << endl;
    }

    virtual void withdraw(double amt)
    {
        if (balance >= amt)
        {
            balance -= amt;
            cout << "Withdrawn ₹" << amt << ". Remaining Balance: ₹" << balance << endl;
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    string getAccountNumber()
    {
        return accountNumber;
    }

    bool validatePIN(string inputPIN)
    {
        return pin == inputPIN;
    }

    virtual void display()
    {
        cout << "Account No: " << accountNumber << "\nBalance: ₹" << balance << endl;
    }

    virtual ~Account() {}
};
