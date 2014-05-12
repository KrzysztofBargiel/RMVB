#include "Bunny.h"

using namespace std;

void Bunny::Print()
{
    std::cout << Bunny::getName() << " " << Bunny::getAge() << " " << Bunny::getSex();
}

string Bunny::getName()
{
    return Name;
}

int  Bunny::getAge()
{
    return Age;
}
int Bunny::getSex()
{
    return plec ;
}
Bunny::Bunny()
{
    Name = "NoName";
    Age = 0;
    plec = (Sex)(rand() % 2);
    
};

Bunny::~Bunny(){};

