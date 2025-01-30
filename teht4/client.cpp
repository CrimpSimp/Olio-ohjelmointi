#include "client.h"


Client::Client(string n, double limit): name(n), checkingaccount(name), creditaccount(name, limit)
{
    cout<<"Account opened for "<<name<<endl;
    cout<<"Credit limit: $"<<limit<<endl;
}

string Client::getName()
{
    return name;
}

void Client::showBalance()
{
    cout<<name<<" Checking account balance: $"<<checkingaccount.getBalance()<<endl;
    cout<<name<<" Credit account balance: $"<<creditaccount.getBalance()<<endl;
}

bool Client::deposit(double amount)
{
    if (amount <= 0)
    {
        cout<<"Invalid amount"<<endl;
        return false;
    }
    else
    {
        checkingaccount.deposit(amount);
        return true;
    }
}

bool Client::withdraw(double amount)
{
    if(amount <=0)
    {
        cout<<"Invalid amount"<<endl;
        return false;
    }
    else
    {
        checkingaccount.withdraw(amount);
        return true;
    }
}

bool Client::creditPayment(double amount)
{
    if (amount <=0)
    {
        cout<<"Invalid amount"<<endl;
        return false;
    }
    else
    {
        creditaccount.deposit(amount);
        return true;
    }
}

bool Client::creditWithdraw(double amount)
{
    if (amount <=0)
    {
        cout<<"Invalid amount"<<endl;
        return false;
    }
    else
    {
        creditaccount.withdraw(amount);
        return true;
    }
}

bool Client::transfer(double amount, Client & receiver)
{
    if (amount <= 0)
    {
        cout<<"Invalid amount"<<endl;
        return false;
    }

    else if(checkingaccount.getBalance() - amount <0)
    {
        cout<<"Insufficient funds"<<endl;
        return false;
    }
    else
    {
        checkingaccount.withdraw(amount);
        receiver.deposit(amount);
        return true;

    }
}
