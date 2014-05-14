#include "Colony.h"
#include "Bunny.h"
#include <time.h>
#include <unistd.h>


Colony::Colony()
{
    srand((int)time(NULL));
}

void Colony::Cycle(int ilosc)
{
    int cycle = 0;

    Bunny jeden;
    Bunny dwa;
    Bunny trzy;
    Bunny cztery;
    Bunny piec;
    
    farm.push_back(jeden);
    farm.push_back(dwa);
    farm.push_back(trzy);
    farm.push_back(cztery);
    farm.push_back(piec);
    
    for (list<Bunny>::iterator it = farm.begin(); it != farm.end(); it++)
    {
        (*it).Print();
        cout << endl;
    }
    
    while (cycle <= ilosc)
    {
        newBunny();
        Bunny it = farm.back();
        it.Print();
        cout << endl;
        sleep(1);
        cycle++;
    }
    

 
}

void Colony::newBunny()
{
    Bunny szesc;
    farm.push_back(szesc);
}

bool Colony::killBunny()
{
    return false;
}

bool Colony::exterminate()
{
    return false;
}
