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
    checkingaccount.getBalance();
}

bool Client::deposit(double)
{

}

bool Client::withdraw(double)
{

}

bool Client::creditPayment(double)
{

}

bool Client::creditWithdraw(double)
{

}
