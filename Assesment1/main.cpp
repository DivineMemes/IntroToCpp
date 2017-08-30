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
	//Order of stat's: HP, MANA, DEXTERITY, LUCK, MAX HP
	Entity Player = { 200, 150, 25, 10, 200};

	Entity Enemy = { 100, 120, 20, 3, 100 };

	Entity Enemy2 = { 150, 100, 21, 4, 150 };
	int input = 0;
	
	bool returnToMenu = false;

	cout << "#     #                                  ######                                   " << endl;
	Sleep(500);
	cout << "#  #  # # ######   ##   #####  #####     #     #   ##   ##### ##### #      ###### " << endl;
	Sleep(500);
	cout << "#  #  # #     #   #  #  #    # #    #    #     #  #  #    #     #   #      #      " << endl;
	Sleep(500);
	cout << "#  #  # #    #   #    # #    # #    #    ######  #    #   #     #   #      #####  " << endl;
	Sleep(500);
	cout << "#  #  # #   #    ###### #####  #    #    #     # ######   #     #   #      #      " << endl;
	Sleep(500);
	cout << "#  #  # #  #     #    # #   #  #    #    #     # #    #   #     #   #      #      " << endl;
	Sleep(500);
	cout << " ## ##  # ###### #    # #    # #####     ######  #    #   #     #   ###### ###### " << endl;

	
	while (returnToMenu == false)
	{
		cout << "Press 1 to play\nPress 2 for credits\nPress 3 for no reason" << endl;

		cin >> input;

		returnToMenu = true;

		if (input == 1)
		{
			battleSequence(Player, Enemy);
			
			ColorPicker(10);
			cout << "A new wizard materializes!" << endl;
			
			battleSequence(Player, Enemy2);
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
		else if (input != 1 || input != 2 || input != 3)
		{
			cout << "That's not what I said you could press!" << endl;
			returnToMenu = false;
		}

	}
	while (true) {};
}