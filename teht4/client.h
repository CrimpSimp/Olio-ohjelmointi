#ifndef CLIENT_H
#define CLIENT_H
#include "bankaccount.h"
#include "creditaccount.h"
#include <iostream>
using namespace std;


class Client
{
public:
    Client(string, double);
    string getName();
    void showBalance();
    bool deposit(double);
    bool withdraw(double);
    bool creditPayment(double);
    bool creditWithdraw(double);

private:
    string name;
    BankAccount checkingaccount;
    CreditAccount creditaccount;

};

#endif // CLIENT_H
