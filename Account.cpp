#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
#include "Transaction.cpp"

using namespace std;

class Account
{
private:
    double balance;
    vector<Transaction> history;

public:
    Account() : balance(0.0) {}

    void deposit(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid deposit amount.\n";
            return;
        }
        balance += amount;
        history.push_back(Transaction("Deposit", amount));
        cout << "Deposited Rs. " << fixed << setprecision(2) << amount << " successfully.\n";
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount.\n";
            return;
        }
        if (amount > balance)
        {
            cout << "Insufficient funds.\n";
            return;
        }
        balance -= amount;
        history.push_back(Transaction("Withdraw", amount));
        cout << "Withdrew Rs. " << fixed << setprecision(2) << amount << " successfully.\n";
    }

    double getBalance() const
    {
        return balance;
    }

    void printHistory() const
    {
        if (history.empty())
        {
            cout << "No transactions found.\n";
            return;
        }

        cout << "Transaction History:\n";
        cout << left << setw(12) << "Type" << setw(10) << "Amount" << "Time\n";
        for (const auto &t : history)
        {
            cout << setw(12) << t.type << setw(10) << t.amount << t.timestamp << "\n";
        }
    }
};
