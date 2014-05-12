#pragma once
#include <iostream>
#include <list>

using namespace std;

class Colony
{
public:
    bool Cycle();
    bool newBunny();
    bool killBunny();
    bool exterminate();


private:
    list<string> farma;


};
