#pragma once
struct Entity
{
	int HP;
	int MANA;
	int DEX;
	int LUC;
};

void battleSequence(Entity &player, Entity &enemy);