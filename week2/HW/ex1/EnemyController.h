#pragma once

#include "EnemiesStructures.h"
class Enemy; //forward declaration

#define ENEMY_HEALTH 10

class EnemyController
{
private:
    //Place here other required variables
    Enemy* enemies;
    int stepSize;
    Point startinLocation;
    int maxEnemies;
    int currEnemies;
    EnemyDirection direction;

 public:
    // set maxEnemies and stepSize and allocated enemies and do the rest of initialization
    void Init(int maximumEnemies, int step, Point initialLocation);              
    //delete allocated resources
    void Uninit();

    //move all spawned enemies (current enemies)
    void Move();
    // goes through every enemy and shoots them with the damage value (index of the element + 1)
    void DamageAll();
    // returns the number of enemeies which are dead
    int CountKilledEnemies();
    // if it can add the new enemy with ENEMY_HEALTH health value returns true, otherwise false
    bool SpawnEnemy();
};
