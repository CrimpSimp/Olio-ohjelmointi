#include "bankaccount.h"

BankAccount::BankAccount(string name)
{
    owner = name;
   // cout<<"Account created for "<<owner<<endl;

}

double BankAccount::getBalance()
{
    //cout<<"account balance: $"<<balance<<endl;
    return balance;
}

bool BankAccount::deposit(double amount)
{
    if (amount < 0)
    {
        cout<<"Invalid amount"<<endl;
        return false;
    }

    else
    {
        balance += amount;
        cout<<"$"<<amount<<" deposited "<<"for "<<owner<<endl;
        return true;
    }
}


bool BankAccount::withdraw(double amount)
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
        balance -= amount;
        cout<<"$"<<amount<<" withdrawn "<< "from "<<owner<<endl;
        return true;
    }
}
