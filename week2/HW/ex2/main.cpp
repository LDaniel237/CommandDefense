#include <iostream>
#include <cstring>
#include "EnemyWave.h"
#include "Functions.h"
#define _CRT_SECURE_NO_WARNINGS

/*
	Design a C++ class that reflects the properties of an wave of  enemies. The class should include the following:
 - methods to set and get the name of the wave
 - methods to set and get the number of enemies  (must be bigger than 0)
 - methods to set and get the starting health (bigger than 0)
 - methods to set and get the money per enemy (must be a float value)


	Create 2 global functions that compare two wave in terms of: number of enemies and money per enemy.
If two waves are equal the return value of such a function will be 0. If the first wave is bigger than the second one, the return value will be 1, otherwise -1.
	Make sure that you have the following:
a cpp file for the methods specific to the class
a header file for the global functions
a cpp file for the global functions implementation
a main.cpp file that shows how the methods and global functions can be used.

*/

int main()
{
    EnemyWave A, B;
    char s[200] = "Baieti";
    char* p = s;
    EnemyWave C;
    C.Init(p, 3, 10, 20);
    C.setHP(55);
    std::cout << C.getHP() << "\n";
    strcpy_s(s, "Fete");
    B.Init(p, 10, 5, 40);
    std::cout << B.getName() << "\n";
    B.setHP(0);
    std::cout << compareMoney(C, B) << "\n";
    return 0;
}