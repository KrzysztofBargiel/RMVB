#pragma once
#include <iostream>
#include <list>
#include "Bunny.h"

using namespace std;

class Colony
{
public:
    bool Cycle();
    bool newBunny();
    bool killBunny();
    bool exterminate();
    
    Colony();
    ~Colony();
    


private:
    list<string> farma;


};
