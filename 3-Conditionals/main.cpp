#include<iostream>
using namespace std;
int main()
{

	//truth tables

	//1.) true
	//2.) true
	//3.) true
	//4.) false
	//5.) false
	//6.) true
	//7.) true

	//evaluate the following


	// A)
	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}

	std::cout << "A) 30 " << numberA << std::endl;


	// B)
	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}

	std::cout << "B) 15 " << numberB << std::endl;

	// C)
	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}

	std::cout << "C) 24 " << numberC << std::endl;

	// D)
	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}

	std::cout << "D) 0 " << numberD << std::endl;

	// E)
	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}

	std::cout << "E) 56 " << numberE << std::endl;

	// F)
	int numberF = 6;
	if (numberF == 0)
	{
		numberF = 0;
	}
	else if (numberF > 10)
	{
		numberF = 1;
	}

	std::cout << "F) 6 " << numberF << std::endl;

	// G)
	int numberG = 6;

	if (numberG < 0)
	{
		numberG = 0;
	}
	else if (numberG < 2)
	{
		numberG = 1;
	}
	else if (numberG < 5)
	{
		numberG = 2;
	}
	else
	{
		numberG = 3;
	}
	std::cout << "G) 3 " << numberG << std::endl;

	//Number Judging

	int min = 1;
	int mid = 50;
	int max = 100;
	int user = 0;
	cout << "enter a number between 1 - 100" << endl;
	std::cin >> user;

	if (user > mid)
	{
		std::cout << user << " Wow Thats one BIG number. " << std::endl;
	}
	else if (user == mid)
	{
		std::cout << user << " You have found tranqility with such a balanced number. " << std::endl;
	}
	else
	{
		std::cout << user << " Thats a small number. " << std::endl;
	}
	system("pause");

	//Age Gate

	int age = 0;
	cout << "Enter your age " << endl;
	std::cin >> age;

	if (age < 18)
	{
		std::cout << " You are a minor. " << std::endl;
	}
	else if (age >= 18)
	{
		std::cout << " You're an adult find better memes. " << std::endl;
	}
	 if (age >= 50)
	{
		std::cout << " You'er eligible to join AARP. " << std::endl;
	}
	if (age >= 65)
	{
		std::cout << " You are eligible for retirment benefits " << std::endl;
	}

	
	//Smallest of three numbers

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "Enter 3 numbers " << endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;

	if (num1 <= num2 && num1 <= num3)
	{
		cout << num1 << endl;
	}
	else if (num2 <= num1 && num2 <= num3)
	{
		cout << num2 << endl;
	}
	else if (num3 <= num1 && num3 <= num2)
	{
		cout << num3 << endl;
	}


	//Even or Odd
	int number = 0;
	bool odd = false;
	bool even = false;
	
	cout << "Enter another number " << endl;
	cin >> number;
	
	int outcome = number % 2;
	
	if (outcome != 0)
	{
		odd = true;
	}
	else
	{
		even = true;
	}

	if (even)
	{
		cout << "The number is even" << endl;
	}
	
	if (odd)
	{
		cout << "The number is odd" << endl;
	}

	//Clamp the number

	int uValue = 0;
	int minC = 15;
	int maxC = 30;
	cout << "Enter a number " << endl;

	cin >> uValue;

	if (uValue > maxC)
	{
		uValue = maxC;
	}

	if (uValue < minC)
	{
		uValue = minC;
	}
	cout << uValue << endl;
	
	
	// Field:       Thai Spiciness Rating
	// Constraints: Any number from 0 to 5, inclusive of both ends.
	int thaiSpiceRating = 0;
	std::cout << "How spicy should your food be (1-5)?\n";
	std::cin >> thaiSpiceRating;
	if (thaiSpiceRating > 5) 
	{ 
		thaiSpiceRating = 5; 
	}
	else if (thaiSpiceRating < 0)
	{
		thaiSpiceRating = 0; 
	}
	std::cout << "You ordered with a spiciness rating of " << thaiSpiceRating << "!\n";

	// Field:       Purchase Order for Cookies
	// Constraints: Must be ordered in multiples of 23. Only whole numbers.
	//              Round down to the nearest multiple if not a multiple of 23.
	//
	//              If nearest multiple is zero, provide an error message.

	int cookies = 0;
	int cOrder = 0;
	
	cout << "Enter how many cookies you want we will determine your order number " << endl;
	cin >> cookies;

	cOrder = cookies / 23;
	cout << cOrder << endl;

	if (cOrder == 0)
	{
		cout << "Error 1" << endl;
	}



	// Field:       Purchase Order for Sketchbooks (3pk)
	// Constraints: Must order at least 9 sketchbooks total.
	//              The total may not exceed 30 sketchbooks ordered.
	//
	//              If the total number of sketchbooks ordered does not meet
	//              the minimum order count or exceeds the maximum order count,
	//              provide an error message.



	int sOrder = 0;

	cout << "Enter the amount of sketchbooks you want they come in 3 packs " << endl;

	cin >> sOrder;

	sOrder * 3;

	if (sOrder < 9)
	{
		cout << "Error 1 " << endl;
	}

	if (sOrder > 30)
	{
		cout << "Error 2 " << endl;
	}

	// Field:       Enable Motion Blur
	// Constraints: Must be a 'y' or 'n' value.
	//
	//              Provide an error message if any other value.


	
	char input;
	bool mBlur = false;
	cout << "Would you like to enable motion blur? " << endl;
	cin >> input;

	if (input == 'y')
	{
		mBlur = true;
	}
	else if (input == 'n')
	{
		mBlur = false;
	}
	else if (input != 'n' || input != 'y')
	{
		cout << "Error 4" << endl;
	}
	

	bool add = false;
	bool sub = false;
	bool div = false;
	bool mul = false;

	int endProd = 0;
	int numA = 0;
	int numB = 0;
	int function = 0;
	
	cout << "Enter your first number " << endl;
	cin >> numA;



	cout << "Press 1 to add, 2 to subtract, 3 to divide, 4 to multiply. " << endl;
	cin >> function;

	cout << "Enter your second number " << endl;
	cin >> numB;

	if (function = 1)
	{
		add = true;
	}
	
	if (function = 2)
	{
		sub = true;
	}
	
	if (function = 3)
	{
		div = true;
	}
	
	if (function = 4)
	{
		mul = true;
	}
	
	if (add)
	{
		endProd = numA + numB;
	}
		
	if (sub)
	{
		endProd = numA - numB;
	}
	
	if (div)
	{
		endProd = numA / numB;
	}

	if (mul)
	{
		endProd = numA * numB;
	}

	cout << endProd << endl;





	system("pause");







	bool isHappy = true;

	if (isHappy)
	{
		std::cout << "happy mang" << std::endl;
	}

	else
	{
		std::cout << "no happy mang" << std::endl;
	}

	int happiness = 0;
	std::cin >> happiness;
	if (happiness > 75)

	{
		std::cout << "happy is me" << std::endl;
	}

	else if (happiness > 30)
	{
		std::cout << "me is somewhat happy" << std::endl;
	}
	else
	{
		std::cout << "no happy" << std::endl;
	}

	system("pause");
}