#include <iostream>
#include "Colony.h"
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[])
{
    list<Bunny> farma;

    Colony Ogrimmar;

    Bunny jeden;
    Bunny dwa;
    Bunny trzy;
    Bunny cztery;
    Bunny piec;
    Bunny szesc;

    farma.push_back(jeden);
    farma.push_back(dwa);
    farma.push_back(trzy);
    farma.push_back(cztery);
    farma.push_back(piec);
    farma.push_back(szesc);

    
    
    for (list<Bunny>::iterator it = farma.begin(); it != farma.end(); it++)
    {
        (*it).Print();
        cout << endl;
    }
        
    
    return 0;
}

