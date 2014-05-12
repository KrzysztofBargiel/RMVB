#include "Bunny.h"

using namespace std;

void Bunny::Print()
{
    cout << Bunny::getName() << " " << Bunny::getAge();
}

string Bunny::getName()
{
    return Name;
}

int  Bunny::getAge()
{
    return Age;
}
Bunny::Bunny() {};
Bunny::Bunny(string a_Name, int a_Age)
{
    Name = a_Name;
    Age = a_Age;
}


Bunny::~Bunny(){};

// github sucks
