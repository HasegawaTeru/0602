#pragma once
#include "EnemyData.h"

//　@brief 敵のデータを表す構造体
//　@details
//　この構造体は、敵の基本的な属性を格納します
struct Enemy
{
public:
	
	EnemyData Data;

	Enemy(const EnemyData& data)
		:Data(data)
	{
	}
};