#pragma once
#include <iostream>
#include <list>
#include "Bunny.h"

using namespace std;

class Colony
{
public:
    void wypisz();
    bool Cycle();
    bool newBunny();
    bool killBunny();
    bool exterminate();
    
    Colony();
    //~Colony();
    


private:
     //list<Bunny> farma;


};
