#include "Battles.h"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
void printEntity(Entity target)
{
	std::cout << "HP: " << target.HP << std::endl;
	std::cout << "STR: "<< target.STR << std::endl;
	std::cout << "DEF: " << target.DEF << std::endl;
	std::cout << "LUC: "<< target.LUC << std::endl;
}

void battle(Entity &player, Entity enemy)
{
	int input = 0;
	bool inProg = true;

	while (inProg)
	{
		std::cout << "Your stats " << std::endl;
		printEntity(player);


		std::cout << "Enemy's stats " << std::endl;
		printEntity(enemy);

		if (player.HP <= 0)
		{
			exit(0);
		}
		
		if (player.HP > 0)
		{
			cout << "What will you do? press 1 to attack, 2 to try and heal " << endl;
			cin >> input;

				if (input == 1)
				{
					enemy.HP -= player.STR - enemy.DEF;
					player.HP -= enemy.STR - player.DEF;
				}
			
				if (input == 2)
				{
					int chance = rand() % 10 + 1;

					if (chance > player.LUC)
					{
						player.HP += 20;
						player.HP -= enemy.STR - player.DEF;
					}
				}
		
		}
		
		
		inProg = player.HP > 0 && enemy.HP > 0;
		
	}



}
