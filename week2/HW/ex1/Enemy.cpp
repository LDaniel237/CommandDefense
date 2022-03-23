#include "Enemy.h"

void Enemy::Init(Point intitialLocation, int initialHealh)
{
<<<<<<< HEAD
    location = intitialLocation;
    health   = initialHealh;
=======
    this->location = intitialLocation;
    this->health   = initialHealh;
>>>>>>> 8a1b33f28502236183047aa8be67dcdd054c3092
}

void Enemy::Move(EnemyDirection direction, int step)
{
    switch (direction)
    {
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

<<<<<<< HEAD
bool Enemy::IsDead()
{
    return (health <= 0);
=======
bool Enemy::IsDead() const
{
    return health <= 0;
>>>>>>> 8a1b33f28502236183047aa8be67dcdd054c3092
}

void Enemy::Shoot(int damage)
{
    health -= damage;
}
