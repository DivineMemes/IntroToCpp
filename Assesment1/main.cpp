#include <iostream>
#include <windows.h>
#include "Battle.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Order of stat's: HP, MANA, DEXTERITY, LUCK
	Entity Player = {100, 120, 25, 10};

	Entity Enemy = { 100, 120, 20, 10 };

	battleSequence(Player, Enemy);




	while (true) {};
}