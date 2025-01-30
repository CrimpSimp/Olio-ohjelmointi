#include <iostream>
#include "bankaccount.h"
#include "creditaccount.h"
#include "client.h"
using namespace std;

int main()
{
    Client client1("Antti", 1000);
    Client client2("Ossi", 1500);
    Client client3("Maikki", 5000);

    client1.deposit(3000);
    client2.deposit(300);

    client1.creditWithdraw(200);
    client2.creditWithdraw(1000);

    client1.showBalance();
    client2.showBalance();
    client1.transfer(200, client2);
    return 0;
}
