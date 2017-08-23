#include "Vector2D.h"
#include <cmath>
Vector2D affinSum(Vector2D a, Vector2D b)
{
	float xsum = a.x + b.x;
	float ysum = a.y + b.y;
	return{xsum, ysum};
}

Vector2D diff(Vector2D a, Vector2D b)
{
	float xdiff = a.x - b.x;
	float ydiff = a.y - b.y;

	return{ xdiff, ydiff };
}

float dist(Vector2D a, Vector2D b)
{
	return sqrtf((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y));
}
