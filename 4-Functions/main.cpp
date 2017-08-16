#include <iostream>
#include <cmath>
using namespace std;

int SquareInt(int n/*, int m*/)
{
	return n*n;
		
}
void HelloFunctions()
{
	cout << "Hello Functions" << endl;
}

float DecimalFromFraction(int a, int b)
{

	return a/b;

}

float LargestFloatDiff(float a, float b, float c)
{
	int lg = a;
	int sm = a;

	if (lg < b) lg = b;
	if (lg < c) lg = c;

	if (sm > b) sm = b;
	if (sm > c) sm = c;

	return lg - sm;
}

void PrintWComma(int a, int b)
{
	cout << a << ", " << b << endl;

}


int SumThree(int a, int b, int c)
{
	return a + b + c;
}

void min(int a, int b)
{
	if (a < b)
	{
		cout << a <<endl;
	}
	
	if (b < a)
	{
		cout << b << endl;
	}

	if (b == a)
	{
		cout << b << endl;
	}
}
void max(int a, int b)
{
	if (a > b)
	{
		cout << a << endl;
	}
	
	if (b > a)
	{
		cout << b << endl;
	}

	if (b == a)
	{
		cout << b << endl;
	}
}

int Clamp(int a, int b, int c)
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




float Distance(float xa, float ya, float xb, float yb)
{
	return ((xb - xa) * (xb - xa)) + ((yb - ya) * (yb - ya));
}
float Eta(float xa, float ya, float xb, float yb, float unitpersecond)
{
	return ((xb - xa) * (xb - xa)) + ((yb - ya) * (yb - ya))/unitpersecond;
}


int main()
{

	HelloFunctions();
	
	int x = 2;
	cin >> x;
		
	int sum = SquareInt(x);
	cout << sum << endl;
	
	
	
	int numerator = 0;
	int denominator = 0;
	cout << "Enter the numerator " << endl;
	cin >> numerator;
	cout << "Enter the denominator " << endl;
	cin >> denominator;

	float decimal = DecimalFromFraction(numerator, denominator);
	cout << decimal << endl;


	
	//print with comma work
	int num1 = 0;
	int num2 = 0;
	cout << "Enter the 1st number " << endl;
	cin >> num1;
	cout << "Enter the 2nd number " << endl;
	cin >> num2;

	PrintWComma(num1, num2);


	// add three numbers work
	int add1;
	int add2;
	int add3;

	cout << "Enter the 1st number to add " << endl;
	cin >> add1;
	cout << "Enter the 2nd number to add " << endl;
	cin >> add2;
	cout << "Enter the 3rd number to add " << endl;
	cin >> add3;
	int sums = SumThree(add1, add2, add3);
	cout << sums << endl;

	//lowest number work
	int lNum1;
	int lNum2;

	cout << "Enter the 1st number " << endl;
	cin >> lNum1;
	cout << "Enter the 2nd number " << endl;
	cin >> lNum2;



	//min function work
	min(lNum1, lNum2);

	int mNum1;
	int mNum2;

	cout << "Enter the 1st number " << endl;
	cin >> mNum1;
	cout << "Enter the 2nd number " << endl;
	cin >> mNum2;



	//max number work
	max(mNum1, mNum2);


	int cInput;
	int cMin;
	int cMax;

	cout << "Enter a minimum " << endl;
	cin >> cMin;
	
	cout << "Enter a maximum " << endl;
	cin >> cMax;

	cout << "Enter a number " << endl;
	cin >> cInput;

	
	//clamp work
	int clamp = Clamp(cMin, cInput, cMax);
	
	cout << clamp << endl;


	

	//Distance work
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


	float distance = Distance(xa, ya, xb, yb);
	

	cout << "The distance between the two points is " << sqrtf (distance) << endl;
	//eta work
	float x1;
	float x2;
	float y1;
	float y2;
	float speed;
	cout << "Enter the X than the Y for point 1" << endl;
	cin >> x1;
	cin >> y1;
	cout << "Enter the X than the Y for point 2" << endl;
	cin >> x2;
	cin >> y2;
	cout << "Enter your speed " << endl;
	cin >> speed;


	float eta = Eta(x1, y1, x2, y2, speed);


	cout << "The time it will take you to get to your destination is " << eta << endl;

	system("pause");
}


