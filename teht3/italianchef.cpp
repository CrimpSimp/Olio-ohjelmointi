#include "italianchef.h"

ItalianChef::ItalianChef(string n):Chef(n)
{
    chefName = n;
    cout<<"Italian chef constructed with name "<<n<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Italian chef "<<chefName<< " destructed"<<endl;
}

bool ItalianChef::askSecret(string input, int f, int w)
{
    cout<<"Password: "<<endl;
    cin>>input;
    if (password.compare(input) == 0)
    {
        cout<<"Password correct!"<<endl;
        makePizza(f,w);
        return true;

    }
    else
    {
        cout<<"Wrong password"<<endl;
        return false;
    }

}

int ItalianChef::makePizza(int flourGot, int waterGot)
{
    int flour = flourGot;
    int water = waterGot;
    int reqFlour = 5;
    int reqWater = 5;
    int pizzaAmount = min((flour / reqFlour),(water / reqWater));

    cout<<"Chef has "<<flour<<" flour and "<<water<<" water"<<endl;
    cout<<"Chef can make "<<pizzaAmount<<" pizzas"<<endl;

    return pizzaAmount;
}

