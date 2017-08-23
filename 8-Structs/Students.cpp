#include "Students.h"
#include <iostream>

void printInfo(Students info[], int size)
{
	for(int i = 0; i < size; i++)
		std::cout << "Student# " << info[i].stID << " Course# " <<  info[i].courses << " Last test results " << info[i].lastExam << std::endl;
}

float avgTestScore(Students info[], int size)
{
	float sum = 0;
	float avg = 0;
	for( int i = 0; i < size; i++)
	{
		sum += info[i].lastExam;
		avg = sum / size;
	}

	return avg;
}

int medTestScore(Students info[], int size)
{
	float median = 0;
	// sort
	while (true)
	{
		bool isSorted = true;
		for (int i = 0; i < size - 1; i++)
		{
			if (info[i].lastExam > info[i + 1].lastExam)
			{
				int temp = info[i].lastExam;

				info[i].lastExam = info[i + 1].lastExam;
				info[i + 1].lastExam = temp;
				isSorted = false;
			}
		}

		if (isSorted)
		{
			break;
		}
	}

	// retrieve the median
	// if the median is even
	if (size % 2 == 0)
	{
		int a = info[size / 2 - 1].lastExam;
		int b = info[size / 2].lastExam;
		median = (a + b) / 2;
	}
	// otherwise it's odd
	else
	{
		median = info[size / 2].lastExam ;
	}

	return median;
}

int studentClasses(Students info[], int size, int course)
{
	int total = 0;
	

	for (int i = 0; i < size; i++)
	{
		if (course == info[i].courses)
		{
			total++;
		}
	}
	return total;
}


