#include "EnemyController.h"
#include "Enemy.h" // to actualy use the field Enemy declared in the header by forward declaration, we use the field here

void EnemyController::Init(int maximumEnemies, int step, Point initialLocation)
{
<<<<<<< HEAD
    stepSize        = step;
    maxEnemies      = maximumEnemies;
    enemies         = new Enemy[maxEnemies + 1];
    startinLocation = initialLocation;
    currEnemies     = 0;
=======
    enemies         = new Enemy[maximumEnemies];
    stepSize        = step;
    startinLocation = initialLocation;
    currentCount    = 0;
    maxEnemies      = maximumEnemies;
>>>>>>> 8a1b33f28502236183047aa8be67dcdd054c3092
}

void EnemyController::Uninit()
{
    delete[] enemies;
<<<<<<< HEAD
    currEnemies = 0;
=======
>>>>>>> 8a1b33f28502236183047aa8be67dcdd054c3092
}

void EnemyController::Move()
{
<<<<<<< HEAD
    for (int i = 0; i < currEnemies; i++)
        enemies[i].Move(direction, stepSize);
=======
    for (int i = 0; i < currentCount; i++)
        enemies[i].Move(EnemyDirection::RightDirection, stepSize);
>>>>>>> 8a1b33f28502236183047aa8be67dcdd054c3092
}

void EnemyController::DamageAll()
{
<<<<<<< HEAD
    for (int i = 0; i < currEnemies; i++)
        if (!enemies[i].IsDead())
            enemies[i].Shoot(i + 1);
=======
    for (int i = 0; i < currentCount; i++)
        enemies[i].Shoot(i + 1);
>>>>>>> 8a1b33f28502236183047aa8be67dcdd054c3092
}

int EnemyController::CountKilledEnemies()
{
<<<<<<< HEAD
    int counter = 0;
    for (int i = 0; i < currEnemies; i++)
        if (enemies[i].IsDead())
            counter++;
    return counter;
=======
    int count = 0;
    for (int i = 0; i < currentCount; i++)
        if (enemies[i].IsDead())
            count++;
    return count;
>>>>>>> 8a1b33f28502236183047aa8be67dcdd054c3092
}

bool EnemyController::SpawnEnemy()
{
<<<<<<< HEAD
    if (currEnemies < maxEnemies)
    {
        currEnemies++;
        enemies[currEnemies - 1].Init(startinLocation, ENEMY_HEALTH);
        return true;
    }
    return false;
=======
    if (currentCount >= maxEnemies)
        return false;
    enemies[currentCount].Init(startinLocation, ENEMY_HEALTH);
    currentCount++;
    return true;
>>>>>>> 8a1b33f28502236183047aa8be67dcdd054c3092
}
