#pragma once
#include <iostream>
#include <list>
#include "Bunny.h"

using namespace std;

class Colony : public Bunny
{
public:
    void BornBraveOne();
    void Print(int cycle);
    void getOld(); // Bunnies in list<Bunny> get +1 to Age
    void Cycle(int a);
    void newBunny(); // create new Bunny and add him to list<Bunny> farm
    void killBunny(); // Kill Old Bunnies
    void FreshBlood();
    bool exterminate(); // Push "k" to kill 50% of bunny  population
    int CountThoseBastards();
    int CountThoseHeretics();
    int Count();

    list<Bunny> farm;

    Colony();
    ~Colony();



private:
     //list<Bunny> farma;


};
