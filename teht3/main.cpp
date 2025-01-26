#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    //string Chefid;
    //cout<<"What's the chef's name?"<<endl;
    //cin>>Chefid;
    Chef kokki("Marco");
    kokki.makeSalad(17);
    kokki.makeSoup(5);

    ItalianChef kokkiKolmonen("Pedro");
    kokkiKolmonen.makeSoup(10);
    kokkiKolmonen.makeSalad(8);
    kokkiKolmonen.askSecret("password", 30, 24);

    return 0;
}
