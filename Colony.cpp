#include "Colony.h"
#include "Bunny.h"
#include <time.h>
#include <unistd.h>
#include <list>


Colony::Colony()
{
    srand((int)time(NULL));
}
Colony::~Colony(){}

void Colony::getOld()
{
    for (list<Bunny>::iterator it = farm.begin(); it != farm.end(); it++)
    {
        (*it).setAge();
    }
}

void Colony::Cycle(int ilosc)
{
    int cycle = 0;

    Bunny jeden;
    Bunny dwa;
    Bunny trzy;
    Bunny cztery;
    Bunny piec;
    
    farm.push_back(jeden);
    farm.push_back(dwa);
    farm.push_back(trzy);
    farm.push_back(cztery);
    farm.push_back(piec);
    
    while (cycle <= ilosc)
    {
        Print(cycle);
        CountThoseBastards();
        FreshBlood();
        BornBraveOne();
        getOld();
        killBunny();


        cycle++;
        sleep(3);


    }
    
}

void Colony::newBunny()
{
    Bunny a_New;
    farm.push_back(a_New);
    if (!(a_New.getSex() =="Vamp"))
    {
        cout <<"Bunny " << a_New.getName() <<" was born!" << endl;
    } else {cout <<"VAMPIRE Bunny " << a_New.getName() <<" was born!" << endl;}

}

void Colony::killBunny()
{
    for (list<Bunny>::iterator it = farm.begin(); it != farm.end(); it++)
    {
        if ((*it).getAge() > 5 && !((*it).getSex() =="Vamp"))
        {
            farm.erase(it);
            cout << (*it).getName() <<" said: Im getting old my friend" << endl;
        }
        else if ((*it).getAge() > 10 && (*it).getSex() =="Vamp")
        {
            farm.erase(it);
            cout << (*it).getName() <<" said: TIME TO REST IN COFFIN" << endl;
        }
    }
}

bool Colony::exterminate()
{
    return false;
}

int Colony::CountThoseBastards()
{
    int Male = 0, Female = 0, number = 0;

    for (list<Bunny>::iterator it = farm.begin(); it != farm.end(); it++)
    {
        if ((*it).getSex() == "Male" && (*it).getAge() > 1){Male++;}
        else if ((*it).getSex() == "Female" && (*it).getAge() > 1){Female++;}
        
        if (Female != 0 && Male != 0)
        {
            number =  Female;
        }
    }
    return number; // zwraca ilosc Bunnisow ktore sie urodzą
}

void Colony::Print(int cycle)
{
    cout <<"------------------------------------------- No." << cycle <<" V: " << CountThoseHeretics()<< endl;
    
    for (list<Bunny>::iterator it = farm.begin(); it != farm.end(); it++)
    {
        (*it).Print();
        cout << endl;
    }

}
void Colony::BornBraveOne()
{
    if (CountThoseBastards() >0)
        cout <<"*" << endl;
    for (int i = 0; i < CountThoseBastards(); i++)
    {
        newBunny();
    }
}
int Colony::CountThoseHeretics()
{
    int Vamp = 0;
    for (list<Bunny>::iterator it = farm.begin(); it != farm.end(); it++)
    {
        if ((*it).getSex() == "Vamp"){Vamp++;}
    }
    return Vamp;
}

void Colony::FreshBlood()
{
    if (CountThoseHeretics() >0)
    {
        for (int i = 0; i < CountThoseHeretics(); i++)
        {
            auto it = farm.begin();
            advance(it, rand() % farm.size());
            if (!((*it).getSex() == "Vamp"))
            {
                (*it).changeSex();
                cout <<"Fresh Blood... Argh!...Bunny " << (*it).getName() <<" is Vamp now" << endl;
            }
        }
    }
}