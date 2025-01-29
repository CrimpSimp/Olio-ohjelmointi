#include "creditaccount.h"

CreditAccount::CreditAccount(string name, double amount):BankAccount(name)
{
    creditLimit = amount;
    //owner = name;
}

bool CreditAccount::deposit(double amount)
{
    if (amount < 0)
    {
        cout<<"Invalid amount"<<endl;
        return false;
    }

    else
    {

        cout<<"$"<<amount<<" deposited"<<endl;

        return true;
    }
}

bool CreditAccount::withdraw(double amount)
{
    if (amount <= 0)
    {
        cout<<"Invalid amount"<<endl;
        return false;
    }
    else if (balance - amount < 0)
    {
        cout<<"Insufficient funds"<<endl;
        return false;
    }
    else
    {

        cout<<"$"<<amount<<" withdrawn"<<endl;
        cout<<"balance after transaction: $"<<balance<<endl;
        return true;
    }

}

