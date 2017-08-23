#include <iostream>
#include "Battles.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	// stat list HP, STR, DEF, LUC 
	Entity player = { 100, 15, 10, 5 };

	
	Entity waffleMinion = { 30, 10, 5, 1 };
	Entity hotCinnamon = { 25, 30, 10, 8 };
	Entity candyCornUnicorn = { 50, 15, 10, 5 };
	Entity donutBishop = { 40, 10, 10, 7 };
	Entity kingOfDonuts = { 60, 20, 10, 5 };

	std::cout << "The useless waffleMinion finds you prepare for immediate battle!" << std::endl;
	battle(player, waffleMinion);

	std::cout << "YOU BEAT THE WAFFLE MINION!!!!!!!" << std::endl;
	cout << endl;
	cout << "Watch out! A wild HotCinnamon monster wants to taste flesh prepare for combat!" << endl;
	battle(player, hotCinnamon);
	
	cout << "WOW, You actually beat that one i'm impressed! " << endl;
	cout << endl;
	cout << "No one said candycorn unicorns didnt exist..." << endl;
	battle(player, candyCornUnicorn);
	
	cout << "No one liked candy corn in the first place, good job though!" << endl;
	cout << endl;
	cout << "I had 3 hours to make expanded lore \n so now the donut you were trying to attain is trying to kill you. \n Go kill his bishop or something." << endl;
	battle(player, donutBishop);
	
	cout << "You have enraged the magic donut king he now wants to make you his prize. Don't let this happen" << endl;
	cout << endl;
	battle(player, kingOfDonuts);
	cout << "Congrats you managed to spam the 1 and 2 keys now what?" << endl;
	exit(0);
	while (true) {};
}