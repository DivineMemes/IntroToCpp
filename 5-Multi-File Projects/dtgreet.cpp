#include "dtgreet.h"
#include <iostream>
using namespace std;

void dayGreeting(int day, int month, int year)
{
	cout << "HI! The date is " << day << "/" << month << "/" << year << endl;
}

void timeGreeting(int hour, int minute)
{
	cout << "HI! The time is "  << hour  << ":"<< minute << endl;
}

int isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		return year;
	}
	else 
	{
		cout << "false" << endl;
	}
	
}
