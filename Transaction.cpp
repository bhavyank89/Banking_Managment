#include <iostream>
#include <ctime>
#include <string>
#include <sstream>

using namespace std;

class Transaction
{
public:
    string type;
    double amount;
    string timestamp;

    Transaction(string t, double a) : type(t), amount(a)
    {
        time_t now = time(0);
        timestamp = ctime(&now);
        timestamp.pop_back(); // remove newline
    }
};
