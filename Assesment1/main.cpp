#include <iostream>
#include <windows.h>
#include "Battle.h"
#include <ctime>

using std::cout;
using std::cin;
using std::endl;




int main()
{
	srand(time(0));
	//Order of stat's: HP, MANA, DEXTERITY, LUCK, MAX HP, Max Mana
	Entity Player = { 200, 150, 25, 10, 200, 150 };

	Entity Enemy = { 100, 120, 20, 3, 100, 120 };

	Entity Enemy2 = { 150, 100, 21, 4, 150, 100 };

	Entity Enemy3 = { 200, 150, 26, 6, 200, 150 };
	int input = 0;
	
	bool returnToMenu = false;
	ColorPicker(15);
	cout << "#     #                                  ######                                   " << endl;
	Sleep(500);
	cout << "#  #  # # ######   ##   #####  #####     #     #   ##   ##### ##### #      ##### " << endl;
	Sleep(500);
	cout << "#  #  # #     #   #  #  #    # #    #    #     #  #  #    #     #   #      #      " << endl;
	Sleep(500);
	cout << "#  #  # #    #   #    # #    # #    #    ######  #    #   #     #   #      #####  " << endl;
	Sleep(500);
	cout << "#  #  # #   #    ###### #####  #    #    #     # ######   #     #   #      #      " << endl;
	Sleep(500);
	cout << "#  #  # #  #     #    # #   #  #    #    #     # #    #   #     #   #      #      " << endl;
	Sleep(500);
	cout << " ## ##  # ###### #    # #    # #####     ######  #    #   #     #   ###### ##### " << endl;
	ColorPicker(15);

	
	while (returnToMenu == false)
	{
		cout << "Press 1 to play\nPress 2 for credits\nPress 3 for no reason" << endl;

		cin >> input;

		returnToMenu = true;
		//make an infinite battle loop next time
		if (input == 1)
		{
			battleSequence(Player, Enemy);
			
			ColorPicker(10);
			cout << "A new wizard materializes!" << endl;
			
			battleSequence(Player, Enemy2);

			ColorPicker(10);
			cout << "A new wizard materializes!" << endl;

			battleSequence(Player, Enemy3);

			cout << "There is nothing left for you now good job!\nNow you can play again with the power of magic :D" << endl;
			Sleep(500);
			returnToMenu = false;
		}
		if (input == 2)
		{
			cout << "Code by: Wyatt Gallagher" << endl;
			returnToMenu = false;
		}

		if (input == 3)
		{
			cout << "what were you expecting?" << endl;
			returnToMenu = false;
		}
	}
	while (true) {};
}