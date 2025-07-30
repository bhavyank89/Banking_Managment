#include <iostream>
#include <vector>
#include <algorithm>
#include "Customer.cpp"

using namespace std;

class Bank
{
private:
    vector<Customer> customers;

    Customer *findCustomerByID(string id)
    {
        for (auto &cust : customers)
        {
            if (cust.getID() == id)
                return &cust;
        }
        return nullptr;
    }

public:
    void createCustomer()
    {
        string name, id;
        cout << "Enter customer name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter customer ID: ";
        cin >> id;

        customers.push_back(Customer(name, id));
        cout << "Customer created successfully.\n";
    }

    void createAccount()
    {
        string id;
        cout << "Enter Customer ID: ";
        cin >> id;
        Customer *cust = findCustomerByID(id);

        if (cust)
        {
            cust->createAccount();
        }
        else
        {
            cout << "Customer not found.\n";
        }
    }

    void login()
    {
        string accNum, pin;
        cout << "Enter Account Number: ";
        cin >> accNum;
        cout << "Enter 4-digit PIN: ";
        cin >> pin;

        for (auto &cust : customers)
        {
            Account *acc = cust.getAccountByNumber(accNum);
            if (acc && acc->validatePIN(pin))
            {
                int ch;
                do
                {
                    cout << "\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\nChoice: ";
                    cin >> ch;
                    if (ch == 1)
                    {
                        double amt;
                        cout << "Enter amount: ";
                        cin >> amt;
                        acc->deposit(amt);
                    }
                    else if (ch == 2)
                    {
                        double amt;
                        cout << "Enter amount: ";
                        cin >> amt;
                        acc->withdraw(amt);
                    }
                    else if (ch == 3)
                    {
                        acc->display();
                    }
                } while (ch != 4);
                return;
            }
        }
        cout << "Invalid account or PIN.\n";
    }
};
