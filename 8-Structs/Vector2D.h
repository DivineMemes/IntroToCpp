#pragma once

struct Vector2D
{
	float x;
	float y;
};


Vector2D affinSum(Vector2D a, Vector2D b);
Vector2D diff(Vector2D a, Vector2D b);
float dist (Vector2D a, Vector2D b);