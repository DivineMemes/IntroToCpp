#include "mathutils.h"
#include <iostream>
using namespace std;
int min(int a, int b)
{
	if (a < b)
	{
		cout << a << endl;
		return a;
	}

	if (b < a)
	{
		cout << b << endl;
		return b;
	}

	if (b == a)
	{
		cout << b << endl;
		return b;
	}
}


int max(int a, int b)
{
	if (a > b)
	{
		cout << a << endl;
		return a;
	}

	if (b > a)
	{
		cout << b << endl;
		return b;
	}

	if (b == a)
	{
		cout << b << endl;
		return b;
	}
}

int clamp(int a, int c, int b)
{
	if (b < a)
	{
		b = a;
	}
	if (b > c)
	{
		b = c;
	}
	return b;
}

int dist(int x1, int y1, int x2, int y2)
{
	return ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
}