#pragma once
struct Entity
{
	int HP;
	int MANA;
	int DEX;
	int LUC;
	int HPMAX;
};

void battleSequence(Entity &player, Entity &enemy);