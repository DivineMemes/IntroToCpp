#pragma once
#include <cstdlib>

void seedRng(int seed);

int rng();

int rngRange(int min, int max);

bool rngb();

bool rngbChance(int chance);