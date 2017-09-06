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
	Entity Player = { 100, 150, 6, 10, 100, 150 };

	Entity Enemy = { 100, 150, 5, 3, 100, 100 };
	int input = 0;
	
	bool returnToMenu = false;
	//ascii art from http://www.ascii-art-generator.org/
	ColorPicker(752);
	cout << "#     #                                  ######                                                                                                                " << endl;
	Sleep(500);
	cout << "#  #  # # ######   ##   #####  #####     #     #   ##   ##### ##### #      #####                                                                               " << endl;
	Sleep(500);
	cout << "#  #  # #     #   #  #  #    # #    #    #     #  #  #    #     #   #      #                                                                                   " << endl;
	Sleep(500);
	cout << "#  #  # #    #   #    # #    # #    #    ######  #    #   #     #   #      #####                                                                               " << endl;
	Sleep(500);
	cout << "#  #  # #   #    ###### #####  #    #    #     # ######   #     #   #      #                                                                                   " << endl;
	Sleep(500);
	cout << "#  #  # #  #     #    # #   #  #    #    #     # #    #   #     #   #      #                                                                                   " << endl;
	Sleep(500);
	cout << " ## ##  # ###### #    # #    # #####     ######  #    #   #     #   ###### #####                                                                               " << endl;
	ColorPicker(15);

	
	while (returnToMenu == false)
	{
		cout << "Press 1 to play\nPress 2 for credits\nPress 3 for no reason" << endl;

		cin >> input;

		returnToMenu = true;
		//make an infinite battle loop next time
		if (input == 1)
		{
			bool battle = true;
			while (battle == true)
			{
				battleSequence(Player, Enemy);

				ColorPicker(10);
				cout << "The wizards grudge is insatiable!" << endl;
				battle = false;
				battle = true;
			}
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