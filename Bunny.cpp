#include "Bunny.h"
#include <fstream>
#include <vector>
#include <iomanip> // std::setw

using namespace std;


void Bunny::Print()
{
    cout << left << setw(11) << Bunny::getName() << setw(3) <<"Age: " <<  Bunny::getAge() << "\t Sex: " << Bunny::getSex() <<" \tColor: " << Bunny::GetKolor();
}
string Bunny::getName()
{
    return Name;
}
int Bunny::setAge()
{
    return Age++;
}
int  Bunny::getAge()
{
    return Age;

}
string Bunny::changeSex()
{
    return plec = "Vamp";
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
    string Male = "Male",Female = "Female",Vamp = "Vamp";
    int random = rand() % 100;
    if (random < 2){return Vamp;}
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

Bunny::Bunny(string a_name,int a_age,string a_sex,string a_color):
        Name(a_name),Age(a_age),plec(a_sex),Kolor(a_color){};

Bunny::~Bunny(){};

