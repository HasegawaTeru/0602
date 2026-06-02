#include <iostream>
#include "EnemyFactory.h"
#include "Enemy.h"
#include <random>

int main()
{
    //　HPの合計を格納する変数
    int HP_Sum = 0;
    //　ATKの合計を格納する変数
    int ATK_Avg = 0;

    for (int i = 1; i <= 4; i++)
    {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> dist(1, 4);

        int random = dist(mt);

        Enemy* enemy = EnemyFactory::CreateEnemy(random);

        std::cout << enemy->Data.Name << " EXP:" << enemy->Data.EXP << ", Gold:" << enemy->Data.Gold << ", Critical Rate:" << enemy->Data.CriticalRate << std::endl;

        HP_Sum += enemy->Data.HP;
        ATK_Avg += enemy->Data.ATK;

        delete enemy;
    }

    std::cout << "HPの合計:" << HP_Sum << std::endl;
    std::cout << "ATKの平均:" << ATK_Avg / 4 << std::endl;

    return 0;
}