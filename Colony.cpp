#include "Colony.h"
#include "Bunny.h"
#include <time.h>


Colony::Colony()
{
    srand((int)time(NULL));
}

bool Colony::Cycle()
{
    return false;
}

bool Colony::newBunny()
{
    return false;
}

bool Colony::killBunny()
{
    return false;
}

bool Colony::exterminate()
{
    return false;
}
