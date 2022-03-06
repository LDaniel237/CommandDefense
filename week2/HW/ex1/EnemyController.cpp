#include "EnemyController.h"
#include "Enemy.h" // to actualy use the field Enemy declared in the header by forward declaration, we use the field here

void EnemyController::Init(int maximumEnemies, int step, Point initialLocation)
{
    stepSize        = step;
    maxEnemies      = maximumEnemies;
    enemies         = new Enemy[maxEnemies + 1];
    startinLocation = initialLocation;
    currEnemies     = 0;
}

void EnemyController::Uninit()
{
    delete[] enemies;
    currEnemies = 0;
}

void EnemyController::Move()
{
    for (int i = 0; i < currEnemies; i++)
        enemies[i].Move(direction, stepSize);
}

void EnemyController::DamageAll()
{
    for (int i = 0; i < currEnemies; i++)
        if (!enemies[i].IsDead())
            enemies[i].Shoot(i + 1);
}

int EnemyController::CountKilledEnemies()
{
    int counter = 0;
    for (int i = 0; i < currEnemies; i++)
        if (enemies[i].IsDead())
            counter++;
    return counter;
}

bool EnemyController::SpawnEnemy()
{
    if (currEnemies < maxEnemies)
    {
        currEnemies++;
        enemies[currEnemies - 1].Init(startinLocation, ENEMY_HEALTH);
        return true;
    }
    return false;
}
