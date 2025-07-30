#include "Account.cpp"

class SavingAccount : public Account
{
public:
    SavingAccount(string accNum, string pin) : Account(accNum, pin) {}

    void withdraw(double amt) override
    {
        if (amt > 10000)
        {
            cout << "Savings account withdrawal limit is ₹10,000.\n";
            return;
        }
        Account::withdraw(amt);
    }
};
