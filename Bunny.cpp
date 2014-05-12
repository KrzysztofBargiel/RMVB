#include "Bunny.h"
#include <cstdlib> // srand(), rand()

using namespace std;

void Bunny::Print()
{
	Bunny::getName();
	cout << " ";
	Bunny::getAge();
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
    Name = "NONAME";
    Age = 0;
    plec = (Sex)(rand() % 2);
    
};

Bunny::~Bunny(){};

