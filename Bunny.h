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
    Bunny();
    ~Bunny();

private:
    bool RMVB = false;
    string Name = "";
    int Age = 0;
    Sex plec;
};
