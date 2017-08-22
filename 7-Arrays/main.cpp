#include<iostream>
using std::cout;
using std::cin;
using std::endl;


/*int smallestValue(int numbers[], int size)
{

}*/

void printNumbers(int nums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//nums[i] = i;
		cout << nums[i] << endl;
	}
}

void sumNumbers(int nums[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += nums[i];

		cout << sum << endl;
		//return sum;
	}
}



int smallestValue(int numbers[], int size)
{
	int max = 9999;
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] < max)
		{
			temp = numbers[i];
			max = temp;
		}
	}
	return max;
}


int largestValue(int numbers[], int size)
{
	int min = -9999;
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] > min)
		{
			temp = numbers[i];
			min = temp;
		}
	}
	return min;
}

int findIndex(int numbers[], int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] == value)
		{
			
		}
	}

	return -1;
}


//Array uniqueness

int uniqueArray(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i != j && numbers[i] == numbers[j])
			{
				return false;
			}
		
		}
		return true;
	}
	
}




//reverse array

 void reverseArray(int numbers[], int size)
{
	/*int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 8; j > 0; j--)
		{
			temp = numbers[j];
			numbers[i] = temp;
			cout << numbers[i] << endl;
		}
	}*/




	// different method
	
	/*for (int i = 0; i < 1; i++)
	{
		for (int j = 8; j >= i; j--)
		{
			cout << numbers[j] << endl;
		}
	}*/

	cout << endl;

	for (int i = 0; i < (size / 2); i++)
	{

		int temp = numbers[i];

		numbers[i] = numbers[size - 1 - i];

		numbers[size - 1 - i] = temp;


		


	}
	printNumbers(numbers, size);

}




 //sorting an array

 void arraySortAscend(int numbers[], int size)
 {

	 while (true)
	 {
		 bool isSorted = true;
		 for (int i = 0; i < size - 1; i++)
		 {
			 if (numbers[i] > numbers[i + 1])
			 {
				 int temp = numbers[i];

				 numbers[i] = numbers[i + 1];
				 numbers[i + 1] = temp;
				 isSorted = false;
			 }
			 cout << numbers[i] << endl;
			 
		 }
		 cout <<" ascending" <<  endl;
		 if (isSorted)
		 {
			 break;
		}
	 }
 }
 



 void arraySortDescend(int numbers[], int size)
 {
	 arraySortAscend(numbers, size);
	 reverseArray(numbers, size);
	 
 }

int main()
{
	//declare and define integer arrays
	//accessing arrays using idicies
	//iterating over an array
	//passing arrays into a function
	/*
	int numbers[10];
	numbers[0] = 0;
	numbers[1] = 0;
	numbers[2] = 0;
	numbers[3] = 0;
	numbers[4] = 0;
	numbers[5] = 0;
	numbers[6] = 0;
	numbers[7] = 0;
	numbers[8] = 0;
	numbers[9] = 0;




	for (int i = 0; i < 10; i++)
	{
		numbers[i] = 0;
		cout << numbers[i] << endl;
	}
	
	
	for (int i = 0; i < 10; i +=2)
	{
		numbers[i] = 1;
		cout << numbers[i] << endl;
	}



	int numlist[]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	numbers[0] = 10;



	printNumbers(numbers, 199);*/

	int blah[8];
	int size = 8;
	int input = 0;
	for (int i = 0; i < size; i++)
	{
		blah[i] = i;
	}
	int bloop[]{ 9, 2, 3, 5, 1, 8, 9, 7 };

	//printNumbers(blah, 8);
	//
	//sumNumbers(blah, 8);

	//cout << smallestValue(bloop, 8) << endl;

	//cout << largestValue(bloop, 8) << endl;

	//cin >> input;

	//cout << findIndex(bloop, 8, input) << endl;

	//cout << uniqueArray(bloop, 8) << endl;

	//reverseArray(bloop, 8);

	cout << endl;

	//arraySortAscend(bloop, 8);

	arraySortDescend(bloop, 8);
	system("pause");
}