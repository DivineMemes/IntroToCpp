#include <iostream>
#include <windows.h>
#include "Battle.h"
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	srand(time(0));
	//Order of stat's: HP, MANA, DEXTERITY, LUCK, MAX HP
	Entity Player = { 200, 150, 25, 10, 200};

	Entity Enemy = { 100, 120, 20, 3, 100 };

	battleSequence(Player, Enemy);




	while (true) {};
}