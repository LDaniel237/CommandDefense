#pragma once // header guard

#include "EnemiesStructures.h"

class Enemy
{
private:
    Point location;
    int health;

public:
    void Init(Point intitialLocation, int initialHealh) {
        location = intitialLocation;
        health = initialHealh;
    }
    void Move(EnemyDirection direction, int step) {
        switch (direction) {
        case EnemyDirection::UpDirection:
            location.y -= step;
            break;
        case EnemyDirection::DownDirection:
            location.y += step;
            break;
        case EnemyDirection::LeftDirection:
            location.x -= step;
            break;
        case EnemyDirection::RightDirection:
            location.x += step;
            break;
        default:
            break;
        }
    }

    // returns true is current health is lower or equal to 0
    bool IsDead() {
        return (health <= 0);
    }
    // decrease the health by damage
    void Shoot(int damage) {
        health -= damage;
    } 
};