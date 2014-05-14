#include "Bunny.h"
#include <fstream>
#include <vector>
#include <iomanip> // std::setw

using namespace std;

void Bunny::Print()
{
    cout << left << setw(11) << Bunny::getName() << "Age: " <<  Bunny::getAge() << "\t Sex: " << Bunny::getSex() <<" \tColor: " << Bunny::GetKolor();
}
string Bunny::getName()
{
    return Name;
}
int  Bunny::getAge()
{
    return Age;
}
string Bunny::getSex()
{
    return plec;
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
string Bunny::Sex()
{
    string Male = "Male",Female = "Female",Vampire = "Vampire";
    int random = rand() % 100;
    if (random < 2){return Vampire;}
    else if (random > 1 && random < 51) {return Male;}
    else {return Female;};
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
    plec = Sex();
    Kolor = Color[rand() % Color.size()];

};

Bunny::~Bunny(){};

