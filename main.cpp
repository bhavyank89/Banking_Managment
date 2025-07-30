#include <iostream>
#include <vector>
#include "Customer.cpp"

using namespace std;

vector<Customer> customers;

void welcome();
void registerCustomer();
void login();

int main()
{
    int choice;
    welcome();
    do
    {
        cout << "\n1. Register\n2. Login\n3. Exit\nChoose: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            registerCustomer();
            break;
        case 2:
            login();
            break;
        case 3:
            cout << "Thank you for using the Banking System.\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 3);
    return 0;
}

void welcome()
{
    cout << "==============================\n";
    cout << "  Welcome to MyBank System\n";
    cout << "==============================\n";
}

void registerCustomer()
{
    string name, pin;
    cout << "Enter your name: ";
    cin >> ws;
    getline(cin, name);
    cout << "Set a 4-digit PIN: ";
    cin >> pin;

    Customer newCustomer(name, pin);
    customers.push_back(newCustomer);
    cout << "Account created successfully! Your ID is: " << newCustomer.getId() << endl;
}

void login()
{
    int id;
    string pin;
    cout << "Enter Customer ID: ";
    cin >> id;
    cout << "Enter PIN: ";
    cin >> pin;

    bool found = false;
    for (auto &c : customers)
    {
        if (c.getId() == id && c.verifyPin(pin))
        {
            found = true;
            c.menu();
            break;
        }
    }
    if (!found)
    {
        cout << "Invalid ID or PIN.\n";
    }
}
