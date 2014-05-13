#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Bunny
{
public:
    enum Sex {M = 0, F = 1, ERROR = -1};
    
    void Print();
    string getName();
    int  getAge();
    int  getSex();
    void GetListName();
    vector<string> HighBornBunnies;
    string tab[2] = {"Adam","Max"};
    Bunny();
    ~Bunny();

private:
    bool RMVB = false;
    string Name = "";
    int Age = 0;
    Sex plec;
};
