#include "Bunny.h"
#include <fstream>
#include <vector>
#include <iomanip> // std::setw

using namespace std;

void Bunny::Print()
{
    cout << left << setw(11) << Bunny::getName() << "Age: " <<  Bunny::getAge() << " Sex:" << Bunny::getSex() <<" Color: " << Bunny::GetKolor();
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
void Bunny::GetListName()
{
    ifstream input;
    input.open("Imiona.csv");
    
    while(input.good())
    {
        string imie;
        input >> imie;
        HighBornBunnies.push_back(imie);
    }
    input.close();
}
string Bunny::GetKolor()
{
    return Kolor;
}

Bunny::Bunny()
{
    GetListName();
    Name = HighBornBunnies[rand() % HighBornBunnies.size()];
    Age = 0;
    plec = (Sex)(rand() % 2);
    Kolor = Color[rand() % Color.size()];
    
};

Bunny::~Bunny(){};

