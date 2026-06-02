#include "EnemyFactory.h"
#include "Enemy.h"

const EnemyData EnemyFactory::EnemyTable[] = {
	{ 1, "Slime", 10, 5, 2, 1, 10, 5, Element::None },
	{ 2, "Goblin", 20, 10, 5, 2, 20, 10, Element::Earth },
	{ 3, "Orc", 30, 15, 8, 3, 30, 15, Element::Fire },
	{ 4, "Dragon", 100, 50, 20, 5, 1000, 1000, Element::Wind }
};
//　const　変更できない定数を宣言するための修飾子
//　sizeof　指定された型のサイズをバイト単位で返す演算子
const int EnemyFactory::EnemyTableSize = sizeof(EnemyTable) / sizeof(EnemyData);

Enemy* EnemyFactory::CreateEnemy(int ID)
{
	for (int i = 0; i < EnemyTableSize; i++)
	{
		if (EnemyTable[i].ID == ID)
		{
			return new Enemy(EnemyTable[i]);
		}
	}
	// ID が見つからなかった場合は nullptr を返す
	return nullptr;
}