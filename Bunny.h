#pragma once
#include <iostream>

using namespace std;

class Bunny
{
public:
    enum Sex {M = 0, F = 1, ERROR = -1};
    void Print();
    string getName();
    int  getAge();

    Bunny();
    Bunny(string, int);
    ~Bunny();

private:
    bool RMVB = false;
    string Name = "";
    int Age = 0;
};
