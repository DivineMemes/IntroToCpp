#include "Battle.h"
#include <iostream>
void printEntity(Entity target)
{
	std::cout << target.hitpoint << std::endl;
	std::cout << target.atkpoint << std::endl;
	std::cout << target.defpoint << std::endl;
}


void battle(Entity combatantA, Entity combatantB)
{

	bool inProg = true;

	while (inProg)
	{

		std::cout << "Player stats " << std::endl;
		printEntity(combatantA);


		std::cout << "Zombie stats " << std::endl;
		printEntity(combatantB);


		combatantA.hitpoint -= combatantB.atkpoint - combatantA.defpoint;
		combatantB.hitpoint -= combatantA.atkpoint - combatantB.defpoint;
	
		inProg = combatantA.hitpoint > 0 && combatantB.hitpoint > 0;

		if (combatantA.hitpoint > 0)
		{
			std::cout << "YOU WIN " << std::endl;
			
		}
		else if (combatantB.hitpoint > 0)
		{
			std::cout << "YOU WIN " << std::endl;
		}

		else
		{
			std::cout << "EVERYTHING IS DEAD WHYYYYYYYYYYYYY " << std::endl;
		}
	}
}
