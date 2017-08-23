#include "Person.h"
#include "wallet.h"
#include "Students.h"
#include "Vector2D.h"
#include "Battle.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	/*Person me;

	me.age = 22;
	me.weight = 109.0f;


	me.charisma = 6;
	me.strength = 9001;
	me.dexterity = 5;

	me.cash = 500.0f;


	Person you = {90, 122.0f, 23, 0, 9001, 0};

	describePerson(me);
	levelUp(you);
	*/

	/*Piggybank leBank;
	leBank.one_dollar = 5;
	leBank.two_dollar = 2;
	leBank.five_dollar = 4;
	leBank.quarters = 20;
	leBank.dimes = 50;
	leBank.nickles = 10;
	leBank.pennies = 10000;

	cout << "You have " << calcPiggybankNotes(leBank) << "$ in your piggy bank" << endl;
	cout << "You have " << calcPiggybankCoins(leBank) << " cents in your piggy bank" << endl;
	cout << "You have " << calcPiggybankTotal(leBank) << "$ in your piggy bank total" << endl;



	Students student[5]{};

	student[0] = { 12006, 1, 45 };
	
	student[1] = { 12007, 2, 29 };

	student[2] = { 12008, 2, 32 };
	
	student[3] = { 12009, 1, 40 };

	student[4] = { 12010, 1, 54 };


	printInfo(student, 5);
	float blah = avgTestScore(student, 5);
	cout << "The avg test scores are: " << blah << endl;
	
	cout << medTestScore(student, 5) << endl; 

	int user = 0;
	cout << "enter a number" << endl;
	cin >> user;
	cout << studentClasses(student, 5, user) << endl;*/


	Vector2D vector;

	Vector2D vec1 = { 1.0f, 5.2f };

	Vector2D vec2 = { 2.3f, 2.2f };


	Entity fighterA = {20, 8, 1};
	Entity fighterB = {30, 7, 2};


	battle(fighterA, fighterB);
	while (true){}//equivilant to system pause
}