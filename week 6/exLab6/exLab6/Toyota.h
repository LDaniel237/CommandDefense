#pragma once
#include "Car.h"

class Toyota : public Car 
{
  private:
    int getCurrSpd(Weather w) override;
    int getFuelCurr() override;
    bool outOfFuel() override;
    void setAvgSpd() override;
};