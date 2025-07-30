#include "Account.cpp"

class CurrentAccount : public Account
{
public:
    CurrentAccount(string accNum, string pin) : Account(accNum, pin) {}

    void withdraw(double amt) override
    {
        Account::withdraw(amt); // no limit
    }
};
