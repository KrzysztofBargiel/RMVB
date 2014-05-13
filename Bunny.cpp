#include "Bunny.h"
#include <fstream>
#include <vector>
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
    
   for (auto it = HighBornBunnies.begin(); it != HighBornBunnies.end(); it++)
    {
        cout << *it << " ";
   }
    cout << endl;
}

Bunny::Bunny()
{
    Name = "noName";
    Age = 0;
    plec = (Sex)(rand() % 2);
    
};

Bunny::~Bunny(){};

