#include "EnemyWave.h"

int compareNumber(EnemyWave A, EnemyWave B) {
    if (A.getNumber() > B.getNumber())
        return 1;
    if (A.getNumber() == B.getNumber())
        return 0;
    return -1;
}

int compareMoney(EnemyWave A, EnemyWave B) {
    if (A.getMoney() > B.getMoney())
        return 1;
    if (A.getMoney() == B.getMoney())
        return 0;
    return -1;
}