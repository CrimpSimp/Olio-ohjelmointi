#include "chef.h"

Chef::Chef(string n)
{
    chefName = n;
    cout<<"Chef constructed with name "<<n<<endl;

}

Chef::~Chef()
{
    cout<<"Chef "<<chefName<<" destructed"<<endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int i)
{
    int required = 5;
    int ingredients = i;
    int saladAmount = ingredients / required;
    cout<<"Chef has "<<i<<" ingredients for salad"<<endl;
    cout<<"Chef can make "<<saladAmount<<" servings of salad"<<endl;
    return saladAmount;


}

int Chef::makeSoup(int i)
{
    int required = 3;
    int ingredients = i;
    int soupAmount = ingredients / required;
    cout<<"Chef has "<<i<<" ingredients for soup"<<endl;
    cout<<"chef can make "<<soupAmount<<" bowls of soup"<<endl;
    return soupAmount;
}
