#include "Wallet.h"

float calcPiggybankNotes(Piggybank piggy)
{

	float sumD = 0;

	sumD += piggy.one_dollar * 1.00f;
	sumD += piggy.two_dollar * 2.00f;
	sumD += piggy.five_dollar * 5.00f;


	return sumD;
}

float calcPiggybankCoins(Piggybank piggy)
{
	float sumC = 0;


	sumC += piggy.quarters * 0.25f;
	sumC += piggy.dimes * 0.10f;
	sumC += piggy.nickles * 0.05f;
	sumC += piggy.pennies * 0.01f;

	return sumC;
}

float calcPiggybankTotal(Piggybank piggy)
{
	float sumT = 0;


	sumT += piggy.one_dollar * 1.00f;
	sumT += piggy.two_dollar * 2.00f;
	sumT += piggy.five_dollar * 5.00f;
	sumT += piggy.quarters * 0.25f;
	sumT += piggy.dimes * 0.10f;
	sumT += piggy.nickles * 0.05f;
	sumT += piggy.pennies * 0.01f;

	return sumT;
}
