#include <iostream>
#include <vector>
#include <ctime>
#include "Account.cpp"

using namespace std;

int globalCustomerId = 1000;

class Customer
{
private:
    int id;
    string name;
    string pin;
    Account account;

public:
    Customer(string n, string p) : name(n), pin(p), account()
    {
        id = globalCustomerId++;
    }

    int getId() const
    {
        return id;
    }

    bool verifyPin(const string &p) const
    {
        return p == pin;
    }

    void menu()
    {
        int choice;
        do
        {
            cout << "\nWelcome, " << name << "! Choose an option:\n";
            cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. View History\n5. Exit\nChoice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                double amt;
                cout << "Enter amount to deposit: ";
                cin >> amt;
                account.deposit(amt);
                break;
            }
            case 2:
            {
                double amt;
                cout << "Enter amount to withdraw: ";
                cin >> amt;
                account.withdraw(amt);
                break;
            }
            case 3:
                cout << "Current Balance: Rs. " << account.getBalance() << endl;
                break;
            case 4:
                account.printHistory();
                break;
            case 5:
                cout << "Logging out...\n";
                break;
            default:
                cout << "Invalid choice.\n";
            }
        } while (choice != 5);
    }
};
