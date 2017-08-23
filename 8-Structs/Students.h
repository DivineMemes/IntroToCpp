#pragma once

struct Students
{
	int stID; 
	int courses;
	int lastExam;

};

void printInfo(Students info[], int size);

float avgTestScore(Students info[], int size);

int medTestScore(Students info[], int size);

int studentClasses(Students info[], int size, int course);