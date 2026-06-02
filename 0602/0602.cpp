#include <iostream>
#include "EnemyFactory.h"
#include "Enemy.h"

int main()
{
    Enemy* enemy = EnemyFactory::CreateEnemy(1);

    printf("%s EXP:%d, Gold:%d\n", enemy->Name, enemy->EXP, enemy->Gold);

    delete enemy;

    return 0;
}