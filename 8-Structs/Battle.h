#pragma once

struct Entity
{
	float hitpoint;
	float atkpoint;
	float defpoint;
};

void battle(Entity combatantA, Entity combatantB);