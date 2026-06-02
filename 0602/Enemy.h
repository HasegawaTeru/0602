#pragma once
#include "EnemyData.h"

//　@brief 敵のデータを表す構造体
//　@details
//　この構造体は、敵の基本的な属性を格納します
struct Enemy
{
	int ID;
	const char* Name;
	int HP;
	int ATK;
	int DEF;
	int SPD;
	int Gold;
	int EXP;
	Element Element;

	Enemy(const EnemyData& data)
		: ID(data.ID),
		Name(data.Name),
		HP(data.HP),
		ATK(data.ATK),
		DEF(data.DEF),
		SPD(data.SPD),
		Gold(data.Gold),
		EXP(data.EXP),
		Element(data.Element)
	{
	}
};