#pragma once

struct Person
{
	int age;
	float weight;

	int charisma;
	int strength;
	int dexterity;

	float cash;
};

void describePerson(Person cam);
void levelUp(Person &cam);