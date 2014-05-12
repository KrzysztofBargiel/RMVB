#include <iostream>
#include "Colony.h"
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{

    list<Bunny> farma;
    vector<string> imiona;
    
    if (argc > 1)
    {
        ifstream input;
        input.open(argv[1]);
        while (input.good())
        {
            string imie;
            input >> imie;
            imiona.push_back(imie);
        }
        input.close();
    }



    Colony Ogrimmar;

    Bunny jeden;
    Bunny dwa;
    Bunny trzy;
    Bunny cztery;
    Bunny piec;
    
    
    farma.push_back(jeden);
    farma.push_back(dwa);
    farma.push_back(trzy);
    farma.push_back(cztery);
    farma.push_back(piec);
    
    for (list<Bunny>::iterator it = farma.begin(); it != farma.end(); it++)
    {
        (*it).Print();
        cout << endl;
    }
        
    
    return 0;
}

