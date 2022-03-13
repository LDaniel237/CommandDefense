#pragma once // header guard

#include "EnemiesStructures.h"

class Enemy
{
private:
    Point location;
    int health;

public:
    void Init(Point intitialLocation, int initialHealh);
    void Move(EnemyDirection direction, int step);

<<<<<<< HEAD
                    
    bool IsDead(); // returns true is current health is lower or equal to 0
    void Shoot(int damage); // decrease the health by damage
=======
    bool IsDead() const;//returns true is current health is lower or equal to 0
    void Shoot(int damage); //decrease the health by damage
>>>>>>> 8a1b33f28502236183047aa8be67dcdd054c3092
};