#pragma once
struct Entity
{
	int HP;
	int STR;
	int DEF;
	int LUC;
};

void battle(Entity &player, Entity enemy);