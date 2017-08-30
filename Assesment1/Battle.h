#pragma once

struct Entity
{
	int HP;
	int MANA;
	int DEX;
	int LUC;
	int HPMAX;
};
//BLACK	0\BLUE	1\GREEN	2\CYAN	3\RED	4\MAGENTA	5\BROWN	6\LIGHTGRAY	7\DARKGRAY	8\LIGHTBLUE	9\LIGHTGREEN	10\LIGHTCYAN	11\LIGHTRED	12\LIGHTMAGENTA	13\YELLOW	14\WHITE	15
void ColorPicker(int color);

void battleSequence(Entity &player, Entity &enemy);