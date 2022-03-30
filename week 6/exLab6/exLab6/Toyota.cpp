#include "Toyota.h"

int Toyota::getCurrSpd(Weather w)
{
    switch (w)
    {
    case Rain:
        avgSpd = 20;
        break;
    case Sunny:
        avgSpd = 30;
        break;
    case Snow:
        avgSpd = 15;
        break;
    default:
        break;
    }
    return 0;
}

int Toyota::getFuelCurr()
{
    return fuelCurr;
}

bool Toyota::outOfFuel()
{
    if (getFuelCurr() < 0)
        return true;
    return false;
}
