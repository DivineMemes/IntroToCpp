#include<iostream>

int main()
{

	// A)
	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	std::cout << "A) 14 " << numberA << std::endl;

	
	
	// B)
	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) 9 " << numberB << std::endl;

	// C)
	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	std::cout << "C) 21 " << numberC << std::endl;

	
	// D)
	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "D) 3 " << somethingD << std::endl;


	// E)
	int x = 13;

	x = x / 2;

	std::cout << "E) 6 " << x << std::endl;

	
	
	
	// F)
	float y = 13;

	y = y / 2;

	std::cout << "F) 6.5 " << y << std::endl;

	
	// Celsius to Fahrenheit)

	float degCelsius = 0.0f;
	float degFahrenheit = 0.0f; // Modify this variable below.
	std::cin >> degCelsius;
	degFahrenheit = degCelsius * 1.8 + 32;							// <Your work goes here>

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	
	
	// Area of a Rectangle)

	float rectWidth = 0.0f;  // Modify this variable below.
	float rectHeight = 0.0f; // Modify this variable below.
	float rectArea = 0.0f;   // Modify this variable below.

	std::cin >> rectWidth;						 // <Your work goes here>

	std::cin >> rectHeight;

	rectArea = rectWidth * rectHeight;

	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;
	system("pause");
	
	// Average of Five)

	float a, b, c, d, e;    // Modify these variables below.
	float avg;              // Modify this variable below.
	avg = a = b = c = d = e = 0.0f; // Initialize all to zero.

									// <Your work goes here>
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

	avg = a + b + c + d + e / 5;

	std::cout << "Average of Five)" << std::endl;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg: " << avg << std::endl;


	// Number Swap)

	int l = 13;
	int p = 24;
	int swap = 0;

	swap = l;
	l = p;
	p = swap;
	// <Your work goes here>

	std::cout << "Number Swap)" << std::endl;
	std::cout << "l is " << l << std::endl;
	std::cout << "p is " << p << std::endl;



	// Fun Facts for Your Age)

	int age = 0;
	
	// <Your work can go here.>

	std::cin >> age;


	// <You must add more lines to output to the terminal>
	std::cout << "Howdy! You are " << age << " years old!";
	std::cout << " According to info from the World Health Organization, your life expectancy in the US declares you have " << 79 - age << " years left to live ";
	std::cout << "You have been alive for " << age * 12 << " months" << std::endl;



	// The Right Tool for the Job)

	int num;			// integer
	float num2;			// single precision floating point
	long num3;			//Type long (or long int) is an integral type that is larger than or equal to the size of type int.
	long long num4;		//Larger than an unsigned long.
	long double num5;	//Type long double is a floating point type that is larger than or equal to type double.
	wchar_t num6;		//designates a wide character or multibyte char type.
	bool num7;			// true false
	short num8;			//larger than or equal to type char, and shorter||equal to int.
	char num9;			//an integral type that usually contains members of basic execution.
	__int8 num10;		// __int``n (n being size in bits) 



						// Number Swap2.0)

	int k = 13;
	int g = 24;
	

	// <Your work goes here>
	k = g, g = k;
	//this works because of the comma function

	std::cout << "Number Swap)" << std::endl;
	std::cout << "k is " << l << std::endl;
	std::cout << "g is " << p << std::endl;


	system("pause");
	
	
	/*int age = 5000;

	std::cout << "this is written into the code" << std::endl; //prints a text literal
	std::cout << age<< std::endl;							  //prints an integer
															 
	age = age + 50;											//changed the value of age
														   
	std::cout << age << std::endl;

	int first = 4;
	int second = 62;

	int sum = first + second;

	std::cout << first << " plus " << second << " equals " << sum << std::endl;

	float flfirst = 4.9;
	float flsecond = 62.6;

	float flsum = flfirst + flsecond;
	std::cout << flfirst << " plus " << flsecond << " equals " << flsum << std::endl;
	
	int userInput = 0;
	std::cin >> userInput;
	
	std::cout << "here is your stuff " << userInput << std::endl;
	system("pause");*/
}