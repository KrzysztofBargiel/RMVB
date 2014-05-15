#include <iostream>
#include "Colony.h"
#include <cstdlib>

using namespace std;

int main()
{

    Colony Ogrimmar;
    int ilosc = 0;
    cout <<"Podaj ilosc cyklil: ";
    cin >> ilosc;
    cout << endl;
    Ogrimmar.Cycle(ilosc);
    
    return 0;
}

