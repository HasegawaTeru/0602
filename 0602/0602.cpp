#include <iostream>
#include "EnemyFactory.h"
#include "Enemy.h"

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        Enemy* enemy = EnemyFactory::CreateEnemy(i);

        std::cout << enemy->Data.Name << " EXP:" << enemy->Data.EXP << ", Gold:" << enemy->Data.Gold << std::endl;

        delete enemy;
    }

    return 0;
}