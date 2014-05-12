#include <iostream>
#include "Colony.h"
#include <cstdlib>
#include <time.h>

using namespace std;

int main(int argc, const char * argv[])
{
    list<Bunny> farma;


    Colony Ogrimmar;
    
    Bunny nowy = {"Max", 2};
    Bunny dwa = {"Kac", 2};
    Bunny trzy = {"Rio", 2};
    
    farma.push_back(nowy);
    farma.push_back(dwa);
    farma.push_back(trzy);
    
    for (list<Bunny>::iterator it = farma.begin(); it != farma.end(); it++)
    {
        cout << (*it).getName() << " " << (*it).getAge() <<  endl;
    }
        
    
    return 0;
}

