#include "Func.h"
#include "mathutils.h"
#include "dtgreet.h"
#include "rng.h"

using namespace std;


int main()
{
	cout << "Hello World" << endl;

	int blah1;
	int blah2;

	cout << "enter the numbers you want to add " << endl;
	cin >> blah1;

	cin >> blah2;
	int sum = Sum(blah1, blah2);


	cout << sum << endl;
	//min num work
	int lNum1;
	int lNum2;

	cout << "Enter the 1st number " << endl;
	cin >> lNum1;
	cout << "Enter the 2nd number " << endl;
	cin >> lNum2;

	min(lNum1, lNum2);

	//max num work
	int mNum1;
	int mNum2;

	cout << "Enter the 1st number " << endl;
	cin >> mNum1;
	cout << "Enter the 2nd number " << endl;
	cin >> mNum2;

	max(mNum1, mNum2);




	//clamp work
	int cInput;
	int cMin;
	int cMax;

	cout << "Enter a minimum " << endl;
	cin >> cMin;

	cout << "Enter a maximum " << endl;
	cin >> cMax;

	cout << "Enter a number " << endl;
	cin >> cInput;



	int clampNum = clamp(cMin, cInput, cMax);

	cout << clampNum << endl;

	//distance
	float xa;
	float xb;
	float ya;
	float yb;

	cout << "Enter the X than the Y for point 1" << endl;
	cin >> xa;
	cin >> ya;
	cout << "Enter the X than the Y for point 2" << endl;
	cin >> xb;
	cin >> yb;


	float distance = dist(xa, ya, xb, yb);


	cout << "The distance between the two points is " << sqrtf(distance) << endl;




	//date greeting
	int day;
	int month;
	int year;


	cin >> day;
	cin >> month;
	cin >> year;

	dayGreeting(day, month, year);


	//time greet
	int hour;
	int minute;

	cout << "Enter the hour " << endl;
	cin >> hour;

	cout << "Enter the minute " << endl;
	cin >> minute;

	timeGreeting(hour, minute);

	//leap year

	int lyear;

	cout << "What year do you want to check? " << endl;
	 
	cin >> lyear;


	isLeapYear(lyear);
	



	int seed;
	cin >> seed;

	seedRng(seed);


	cout << rng() << endl;

	cout << rngRange(15, 30) << endl;

	cout << rngb() << endl;

	cout << rngbChance(0) << endl;


	system("pause");
}