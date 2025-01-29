#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H
#include <iostream>
#include "bankaccount.h"
using namespace std;

class CreditAccount: public BankAccount
{
public:
    CreditAccount(string, double);
    bool deposit(double) override;
    bool withdraw(double) override;

protected:
    double creditLimit = 0;
};

#endif // CREDITACCOUNT_H
