#include <iostream>
#include <vector>
#include "SavingAccount.cpp"
#include "CurrentAccount.cpp"

using namespace std;

class Customer
{
private:
    string name, id;
    vector<Account *> accounts;

public:
    Customer(string name, string id)
    {
        this->name = name;
        this->id = id;
    }

    string getID() const
    {
        return id;
    }

    void createAccount()
    {
        int type;
        string accNum, pin;

        cout << "Enter new Account Number: ";
        cin >> accNum;
        cout << "Set a 4-digit PIN: ";
        cin >> pin;

        cout << "Select Account Type:\n1. Savings\n2. Current\nChoice: ";
        cin >> type;

        if (type == 1)
            accounts.push_back(new SavingAccount(accNum, pin));
        else
            accounts.push_back(new CurrentAccount(accNum, pin));

        cout << "Account created successfully.\n";
    }

    Account *getAccountByNumber(string accNum)
    {
        for (auto &acc : accounts)
        {
            if (acc->getAccountNumber() == accNum)
                return acc;
        }
        return nullptr;
    }
};
