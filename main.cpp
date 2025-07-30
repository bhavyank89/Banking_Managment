#include <iostream>
#include "Bank.cpp"

using namespace std;

void welcome()
{
    cout << "==============================\n";
    cout << "     BANKING MANAGEMENT SYSTEM\n";
    cout << "==============================\n";
}

int main()
{
    Bank bank;
    welcome();

    int choice;
    do
    {
        cout << "\n1. Create Customer\n";
        cout << "2. Create Account\n";
        cout << "3. Login to Account\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bank.createCustomer();
            break;
        case 2:
            bank.createAccount();
            break;
        case 3:
            bank.login();
            break;
        case 4:
            cout << "Thank you for using the system.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
