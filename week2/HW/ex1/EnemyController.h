#pragma once

#include "EnemiesStructures.h"
#include "Enemy.h"
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
    void Init(int maximumEnemies, int step, Point initialLocation) {
        stepSize = step;
        maxEnemies = maximumEnemies;
        enemies = new Enemy[maxEnemies + 1];
        startinLocation = initialLocation;
        currEnemies = 0;
    }              
    //delete allocated resources
    void Uninit() {
        delete[] enemies;
    } 

    //move all spawned enemies (current enemies)
    void Move() {
        for (int i = 0; i < currEnemies; i++)
            enemies[i].Move(direction, stepSize);
    }
    // goes through every enemy and shoots them with the damage value (index of the element + 1)
    void DamageAll() {
        for (int i = 0; i < currEnemies; i++)
            if (!enemies[i].IsDead())
                enemies[i].Shoot(i + 1);
    }
    // returns the number of enemeies which are dead
    int CountKilledEnemies() {
        int counter = 0;
        for (int i = 0; i < currEnemies; i++)
            if (enemies[i].IsDead())
                counter++;
        return counter;
    }
    // if it can add the new enemy with ENEMY_HEALTH health value returns true, otherwise false
    bool SpawnEnemy() {
        if (currEnemies < maxEnemies) {
            currEnemies++;
            enemies[currEnemies - 1].Init(startinLocation, ENEMY_HEALTH);
            return true;
        }
        return false;
    }
};
