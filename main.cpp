#include <iostream>
#include "Colony.h"
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[])
{
    list<Bunny> farm;

    Colony Ogrimmar;

    Bunny jeden;
    Bunny dwa;
    Bunny trzy;
    Bunny cztery;
    Bunny piec;
    Bunny szesc;

    farm.push_back(jeden);
    farm.push_back(dwa);
    farm.push_back(trzy);
    farm.push_back(cztery);
    farm.push_back(piec);
    farm.push_back(szesc);

    for (list<Bunny>::iterator it = farm.begin(); it != farm.end(); it++)
    {
        (*it).Print();
        cout << endl;
    }

    cin.ignore();

    return 0;
}

