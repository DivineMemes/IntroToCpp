#include <iostream>
#include "6-Loops-main.h"
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

void printXY(int x, int y)
{
	for (x; x <= y; x++)
	{
		cout << x << endl;
	}
}

int promptLargest(int qtyRequest)
{
	int max = -9999999;
	int blah = 0;
	int temp;
	int user;

	cout << "how many times do you want to mindlessly type a number? " << endl;
	cin >> qtyRequest;

	while (blah < qtyRequest)
	{
		cin >> user;
		blah++;
		if (user > max)
		{
			temp = user;
			max = temp;
			
		}
	
	}
	cout << "the largest number is " << max << endl;
	return max;
}

int promptSmallest(int qtyRequest)
{
	int min = 9999999;
	int blah = 0;
	int temp;
	int user;

	cout << "how many times do you want to mindlessly type a number? " << endl;
	cin >> qtyRequest;

	while (blah < qtyRequest)
	{
		cin >> user;
		blah++;
		if (user < min)
		{
			temp = user;
			min = temp;

		}

	}
	cout << "the smallest number is " << min << endl;
	return min;
	
}

void EvenOrOdd(int start, int end)
{
	for (int z = start; z < end; z++)
	{
		if (z % 2 == 0)
		{
			cout << "even " << endl;
		}
		else
		{
			cout << "odd " << endl;
		}
	}

}

void fizzBuzz(int start, int end)
{
}

void gridGen(int width, int height)
{
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			cout << "X";
		}
		cout << "\n";
	}
}

void guessTheNumber(int lower, int upper, int trycount)
{
	int secret = rand() % (upper - lower) + lower;
	bool success = false;
	for (int i = 0; i < trycount; i++)
	{
		int input = 0;
		cout << "guess mang " << endl;
		cin >> input;



		if (input > secret)
		{
			cout << "too high" << endl;

		}
		
		else if (input < secret)
		{
			cout << "too low" << endl;

		}
		else
		{
			success = true;
			break;
		}
		
		if (success)
		{
			cout << "you did it" << endl;

		}
		else
		{
			cout << "bamboozled boi" << endl;
		}
	}
}


int main()
{
	/*int i = 0;
	
	while (i < 11)
	{
		cout << i << endl;
		i++;
	}



	for (int k = 0; k < 11; k++)
	{
		cout << k << endl;
	}
	
	
	int j = 0;
	
	
	do
	{
		cout << j << endl;

		j++;

	} while (j < 11);
	
		
	//simple input validation
	int userInp = -1;

	do
	{
		cout << "gibbe da numba between 1-5 b0sS " << endl;
		cin >> userInp;
	} while (userInp < 1 || userInp > 5);



	cout << "aye thats pretty good " << endl;
	*/

	//from 1 t0 100

	for (int i = 0; i < 101; i++)
	{
		cout << i << endl;
	}


	//from 100 to 1
	int l = 100;
	while (l > 0)
	{
		cout << l << endl;
		l--;
	}



	int m = 1995;
	do
	{
		cout << m << endl;
		m++;
	} while (m < 2017);


	int user1;
	int user2;
	int user3;
	bool game = true;

	cout << "enter a positive number " << endl;
	cin >> user1;	

	if (user1 < 0)
	{
		cout << "please no negatives im already severly depressed " << endl;
		cout << endl;
		cout << "enter a positive number " << endl;
		cin >> user1;
	}
	while (game)
	{
		while (user1 > 0 && game)
		{
			if (user1 > 0)
			{
				cout << user1 << "blah " << endl;

				cout << "enter your second number " << endl;

				cin >> user2;

				if (user2 < 0)
				{
					cout << "please no negatives im already severly depressed " << endl;
					cout << endl;
					cout << "enter a second positive number " << endl;
					cin >> user2;
				}
			}

			while (user2 > 0 && game)
			{
				cout << "your first number is " << user1 << " your second number is " << user2 << endl;

				cout << "enter your third number " << endl;
				cin >> user3;



				if (user3 < 0)
				{
					cout << "please no negatives im already severly depressed " << endl;
					cout << endl;
					cout << "enter a third positive number " << endl;
					cin >> user3;
				}
				if (user3 > 0)
				{
					cout << "your favorite numbers were " << user1 << " " << user2 << " and " << user3 << endl;
					game = false;
				}
				/*while (user3 > 0)
				{
					system("pause");
				}*/

			}
		}
	}
	// from x to y


	int x;
	int y;

	cin >> x;
	cin >> y;


	printXY(x, y);

	int blek = 0;

	promptLargest(blek);
	
	int blook = 0;

	promptSmallest(blook);
	
	EvenOrOdd(1, 10);



	gridGen(4, 10);


	system("pause");
}