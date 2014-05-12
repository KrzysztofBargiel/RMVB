
#ifndef __RMVB__Bunny__
#define __RMVB__Bunny__

#include <iostream>

using namespace std;

class Bunny
{
public:
    enum Sex {M = 0, F = 1, ERROR = -1};

    void setName();
    int  getAge();

    Bunny(string, int);
    ~Bunny();

private:
    bool RMVB = false;
    string Name = "";
    int Age = 0;
};

#endif /* defined(__RMVB__Bunny__) */
