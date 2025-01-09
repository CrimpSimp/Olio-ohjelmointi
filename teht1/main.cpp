#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int game(int);

int main()
{
    int ylaraja;
    cout << "anna ylaraja" << endl;
    cin >> ylaraja;
   int arvausten_maara = game(ylaraja);
   cout << "arvasit " << arvausten_maara << " kertaa" << endl;

    return 0;
}


int game(int maxnum){
    int arvaus;
    int arvausten_maara = 0;
    srand(time(0));
    int random = rand() % maxnum + 1;

    do {

        cout << "arvaa luku " << endl;
        cin >> arvaus;
        arvausten_maara++;

        if (arvaus < random){
            cout << "liian pieni" << endl;

        }
        else if(arvaus > random){
            cout << "liian suuri" << endl;
        }
        else{
            cout << "oikein!" << endl;

        }

    }
    while(arvaus != random);
    return arvausten_maara;
}
