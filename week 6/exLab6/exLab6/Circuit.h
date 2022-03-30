#pragma once
#include "Car.h"
#include "Weather.h"
#include "Circuit.h"
#include "Mazda.h"
#include "Mercedes.h"
#include "Toyota.h"

class Circuit
{
    Car* cars[10];
    int length;
    Weather outside;

public:
    void SetLength(int _length);
    void SetWeather(Weather w);
    void AddCar(Car c);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};