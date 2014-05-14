#pragma once
#include <iostream>
#include <list>
#include "Bunny.h"

using namespace std;

class Colony
{
public:
    void wypisz();
    void Cycle();
    void newBunny();
    bool killBunny();
    bool exterminate();
    
    list<Bunny> farm;

    Colony();
    //~Colony();
    


private:
     //list<Bunny> farma;


};
