#pragma once
#include <iostream>
#include <vector>
#include <cstdlib> // rand

using namespace std;

class Bunny
{
public:
    void Print();
    //Getters
    string getName();
    int setAge();
    int  getAge();
    string getSex();
    string changeSex();
    void GetListName();
    string GetKolor();
    
    string Sex(); // return random sex or Vamp 

    vector<string> HighBornBunnies;
    vector<string> Color {"White","Brown","Black","Spotted"};
    Bunny();
    ~Bunny();

private:
    bool RMVB = false;
    string Name = "";
    int Age = 0;
    string plec ="DUNNO";
    string Kolor = "";
};
