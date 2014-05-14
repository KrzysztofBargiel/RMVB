#pragma once
#include <iostream>
#include <vector>
#include <cstdlib> // rand

using namespace std;

class Bunny
{
public:
    void Print();
    string getName();
    int  getAge();
    string getSex();
    void GetListName();
    string GetKolor();
    string Sex();

    vector<string> HighBornBunnies;
    vector<string> Color {"White","Brown","Black","Spotted"};
    Bunny();
    ~Bunny();

private:
    bool RMVB = false;
    string Name = "";
    int Age = 0;
    string plec;
    string Kolor = "";
};
