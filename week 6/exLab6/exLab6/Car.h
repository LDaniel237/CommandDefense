#pragma once
#include "Weather.h"

class Car 
{
    int fuelCurr, avgSpd;
    int fuelCap;
  protected:
    int fuelComp;
    virtual int getCurrSpd(Weather w) = 0;
    virtual void setAvgSpd()          = 0;
    virtual int getFuelCurr()         = 0;
    virtual bool outOfFuel()          = 0;
};