#include <iostream>
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
		
}




int Distance(int xa, int ya, int xb, int yb)
{

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

	cin >> numerator;
	cin >> denominator;

	float decimal = DecimalFromFraction(numerator, denominator);
	cout << decimal << endl;

	int num1 = 0;
	int num2 = 0;

	cin >> num1;
	cin >> num2;

	PrintWComma(num1, num2);


	int add1;
	int add2;
	int add3;

	cin >> add1;
	cin >> add2;
	cin >> add3;
	int sums = SumThree(add1, add2, add3);
	cout << sums << endl;


	int lNum1;
	int lNum2;

	cin >> lNum1;
	cin >> lNum2;




	min(lNum1, lNum2);

	int mNum1;
	int mNum2;

	cin >> mNum1;
	cin >> mNum2;




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

	Clamp(cMin, cInput, cMax);


	system("pause");
}


