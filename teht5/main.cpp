#include <iostream>
#include "Follower.h"
#include "Notifier.h"

using namespace std;

int main()
{
    Notifier n;
    Follower a("Esko");
    Follower b("Asko");
    Follower c("Ernesti");

    n.add(&a);
    n.add(&b);
    n.add(&c);

    n.print();

    n.remove(&b);
    n.print();
    n.post("Lorem ipsum");

    return 0;
}
