#pragma once
struct Piggybank
{
	int one_dollar;
	int two_dollar;
	int five_dollar;


	int quarters;
	int dimes;
	int nickles;
	int pennies;





};

// Returns the total monetary value of all dollar bills.
float calcPiggybankNotes(Piggybank piggy);

// Returns the total monetary value of all coins.
float calcPiggybankCoins(Piggybank piggy);

// Returns the total monetary value of the piggybank's contents.
float calcPiggybankTotal(Piggybank piggy);