#include "EnemyWave.h"


void EnemyWave::Init(char s[], int nr, int hp, float money)
{
    Name = s;
    nrOfEnemies = nr;
    startingHealth = hp;
    moneyPerEnemy  = money;
}

char* EnemyWave::getName()
{
    return Name;
}

void EnemyWave::setName(char* _name)
{
    strcpy(Name, _name);
}

int EnemyWave::getNumber()
{
    return nrOfEnemies;
}

void EnemyWave::setNumber(int nr)
{
    if (nr > 0)
        nrOfEnemies = nr;
    else
    {
        std::cout << "You must have at least one enemy!\n";
        return;
    }
}

int EnemyWave::getHP()
{
    return startingHealth;
}

void EnemyWave::setHP(int _hp)
{
    if (_hp > 0)
        startingHealth = _hp;
    else
    {
        std::cout << "HP cannot be less than 1\n";
        return;
    }
}

float EnemyWave::getMoney()
{
    return moneyPerEnemy;
}

void EnemyWave::setMoney(float money)
{
    moneyPerEnemy = money;
}
