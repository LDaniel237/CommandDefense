#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>


class EnemyWave
{
  private:
    char* Name;
    int nrOfEnemies;
    int startingHealth;
    float moneyPerEnemy;

  public:
    void Init(char s[], int nr, int hp, float money);
    char* getName();
    void setName(char* _name);
    int getNumber();
    void setNumber(int nr);
    int getHP();
    void setHP(int _hp);
    float getMoney();
    void setMoney(float money);
};