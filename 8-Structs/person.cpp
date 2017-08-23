#include "person.h"
#include <iostream>
void describePerson(Person cam)
{
	std::cout << "Age: " << cam.age << std::endl;
	std::cout << "Wgt: " << cam.weight << std::endl;
	std::cout << "CHA: " << cam.charisma << std::endl;
	std::cout << "STR: " << cam.strength << std::endl;
	std::cout << "DEX: " << cam.dexterity << std::endl;
	
	cam.age = -1;
}

void levelUp(Person & cam)
{
	cam.age = cam.age + 1;
}
