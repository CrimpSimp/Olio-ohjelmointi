#include "creditaccount.h"
#include "bankaccount.h"

CreditAccount::CreditAccount(string name, double amount):BankAccount(name)
{
    creditLimit = amount;
    owner = name;
    //cout<<"Credit limit: $"<<creditLimit<<endl;
}

bool CreditAccount::deposit(double amount)
{
    if (amount < 0)
    {
        cout<<"Invalid amount"<<endl;
        return false;
    }
    else if((balance + amount) > 0)
    {
        cout<<"Credit balance can't exceed 0"<<endl;
        return false;
    }
    else
    {
        balance += amount;
        cout<<"Credit payment of $"<<amount<<endl;
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
    else if ((creditLimit + balance - amount) < 0 )
    {
        cout<<"Can't exceed credit limit"<<endl;
        return false;
    }
    else
    {
        balance -= amount;
        cout<<"$"<<amount<<" withdrawn from "<<owner<<" Credit account. Credit limit: $"<<creditLimit<<endl;
        return true;
    }
}

