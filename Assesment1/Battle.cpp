#include "Battle.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>


using std::cout;
using std::cin;
using std::endl;







//BLACK	0\BLUE	1\GREEN	2\CYAN	3\RED	4\MAGENTA	5\BROWN	6\LIGHTGRAY	7\DARKGRAY	8\LIGHTBLUE	9\LIGHTGREEN	10\LIGHTCYAN	11\LIGHTRED	12\LIGHTMAGENTA	13\YELLOW	14\WHITE	15
void ColorPicker(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void printEntity(Entity target)
{
	ColorPicker(12);
	std::cout << "HP: " << target.HP << std::endl;
	ColorPicker(9);
	std::cout << "MANA: " << target.MANA << std::endl;
	ColorPicker(13);
	std::cout << "DEXTERITY: " << target.DEX << std::endl;
	ColorPicker(4);
	std::cout << "LUCK: " << target.LUC << std::endl;
	ColorPicker(15);
}
void printStats(Entity player, Entity enemy)
{
	ColorPicker(12);
	cout << "Enemy stats: " << endl;
	printEntity(enemy);
	cout << endl;
	cout << endl;
	ColorPicker(9);
	cout << "Your stats: " << endl;
	printEntity(player);
	cout << endl;
	cout << endl;
	ColorPicker(15);
	cout << "_____________________________________________" << endl;
	ColorPicker(15);
}


//function that gets called after every action and is determined by your luck stat to regen mana for both the enemy and the player
void pManaRegen(Entity player)
{
	int chance = rand() % 20;
	if (chance <= player.LUC)
	{
		player.MANA += 10;
		ColorPicker(1);
		cout << "You gained 10 MANA" << endl;
		ColorPicker(15);
	}
}
void eManaRegen(Entity enemy)
{
	int chance = rand() % 20;
	if (chance <= enemy.LUC)
	{
		enemy.MANA += 10;
		ColorPicker(1);
		cout << "You gained 10 MANA" << endl;
		ColorPicker(15);
	}
}


//deals 5 damage for 10 mana
void eFireBolt(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 5;
	enemy.MANA -= 10;
	player.HP -= damage;
}
//deals 5 damage for 10 mana
void pFireBolt(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 5;
	player.MANA -= 10;
	enemy.HP -= damage;
}

//-----------------------------------------------------------

//deals 40 damage for 50 mana
void eLightningBolt(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 40;
	enemy.MANA -= 50;
	player.HP -= damage;
}
//deals 40 damage for 50 mana
void pLightningBolt(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 40;
	player.MANA -= 50;
	enemy.HP -= damage;
}

//-----------------------------------------------------------

//deals 80 damage for 100 mana
void eArcticRain(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 80;
	enemy.MANA -= 100;
	player.HP -= damage;
}
//deals 80 damage for 100 mana
void pArcticRain(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 80;
	player.MANA -= 100;
	enemy.HP -= damage;
}

//-----------------------------------------------------------

//random chance to full heal
void eHealingTouch(Entity &enemy, int mana, bool chance)
{
	int hChance = rand() % 20 + 1;
	if (hChance <= enemy.LUC)
	{
		enemy.HP += 100;
		chance = true;
		ColorPicker(14);
		cout << "The enemy healed for 100 health" << endl;
		ColorPicker(15);

	}
	else
	{
		chance = false;
		ColorPicker(12);
		cout << "The enemy failed to heal nows your chance to strike!" << endl;
		ColorPicker(15);
	}
	enemy.MANA -= 50;
}
//random chance to full heal
void pHealingTouch(Entity &player, int mana, bool chance)
{
	int hChance = rand() % 20+1;
	if (hChance <= player.LUC)
	{
		player.HP += 100;
		chance = true;
		ColorPicker(14);
		cout << "You did it! You gain 100 health! dont give up you can do it!" << endl;
		ColorPicker(15);
	}
	else 
	{
		chance = false;
		ColorPicker(12);
		cout << "You cannot heal this turn" << endl;
		ColorPicker(15);
	}
	player.MANA -= 20;
}


//full battle sequence
void battleSequence(Entity &player, Entity &enemy)
{
	bool isAlive(true);
	bool playerTurn = false;
	bool enemyTurn = false;
	bool hChance = NULL;
	int input = 0;

	if (player.DEX > enemy.DEX)
	{
		if (player.HP <= 0)
		{
			ColorPicker(12);
			cout << "You Lose" << endl;
			Sleep(1000);
			ColorPicker(12);
			cout << "Good Bye" << endl;
			Sleep(2000);
			exit(0);
		}
		playerTurn = true;
	}
	else if (enemy.DEX > player.DEX)
	{
		if (enemy.HP <= 0)
		{
			ColorPicker(100);
			cout << "You WIN" << endl;
			ColorPicker(15);
			player.HP = player.HPMAX;
		}
		enemyTurn = true;
	}

	while (isAlive == true)
	{
		if (enemyTurn == true)
		{	
			printStats(player, enemy);
			

			while (enemyTurn == true)
			{
				int moveSel = rand() % 4+1;
				cout << moveSel << endl;
			
				if (moveSel == 1 && enemy.MANA >= 10)
				{
					ColorPicker(12);
					cout << "The enemy wizard casted a firebolt! You took 5 damage" << endl;
					ColorPicker(15);
					Sleep(1000);
					eFireBolt(player, enemy, enemy.MANA, player.HP);
					pManaRegen(player);
					eManaRegen(enemy);
					playerTurn = true;
					enemyTurn = false;

				}


				if (moveSel == 2 && enemy.MANA >= 50)
				{
					ColorPicker(14);
					cout << "The enemy wizard casted a lightningbolt! You took 40 damage" << endl;
					ColorPicker(15);
					Sleep(1000);
					eLightningBolt(player, enemy, enemy.MANA, player.HP);
					pManaRegen(player);
					eManaRegen(enemy);
					playerTurn = true;
					enemyTurn = false;
				}
			
				if (moveSel == 3 && enemy.MANA >= 100)
				{
					ColorPicker(9);
					cout << "The enemy wizard called upon the powers of an arctic rain! You took 80 damage" << endl;
					ColorPicker(15);
					eArcticRain(player, enemy, enemy.MANA, player.HP);
					Sleep(1000);
					pManaRegen(player);
					eManaRegen(enemy);
					playerTurn = true;
					enemyTurn = false;
				}

				if (moveSel == 4 && enemy.MANA >= 50 && enemy.HP < enemy.HPMAX)
				{
					ColorPicker(14);
					cout << "The enemy tries to heal" << endl;
					ColorPicker(15);
					pManaRegen(player);
					eManaRegen(enemy);
					playerTurn = true;
					enemyTurn = false;
				}
			}

		}
		
		
		
		if (playerTurn == true)
		{		
			printStats(player, enemy);
			cout << "Choose a spell:\n Firebolt : 10 MANA(press 1)\n Lightning Bolt : 50 MANA(Press 2)\n Arctic Rain : 100 MANA(press 3)\n Healing Touch : 20 MANA(press 4)" << endl;
			cout << "_____________________________________________" << endl;
			cout << endl;
			cout << endl;
			
			cin >> input;
		
			if (input == 1 && player.MANA >= 10)
			{
				ColorPicker(4);
				cout << "You casted FireBolt, You lost 10 MANA" << endl;
				pFireBolt(player, enemy, player.MANA, enemy.HP);
				Sleep(1000);
				ColorPicker(12);
				cout << "you did 5 damage to the enemy wizard" << endl;
				ColorPicker(15);
				pManaRegen(player);
				eManaRegen(enemy);
				playerTurn = false;
				enemyTurn = true;
			}
			if (input == 1 && player.MANA < 10)
			{
				ColorPicker(6);
				cout << "You dont have enough mana for that!" << endl;
				ColorPicker(15);
				Sleep(1000);
			}


			if (input == 2 && player.MANA >= 50)
			{
				ColorPicker(14);
				cout << "You casted LightningBolt, you lost 50 MANA" << endl;
				pLightningBolt(player, enemy, player.MANA, enemy.HP);
				Sleep(1000);
				ColorPicker(12);
				cout << "You dealt 40 damage to the enemy wizard" << endl;
				ColorPicker(15);
				pManaRegen(player);
				eManaRegen(enemy);
				playerTurn = false;
				enemyTurn = true;
				
			}
			if(input == 2 && player.MANA < 50)
			{
				ColorPicker(6);
				cout << "You dont have enough mana for that!" << endl;
				ColorPicker(15);
				Sleep(1000);
			}


			if (input == 3 && player.MANA >= 100)
			{
				ColorPicker(9);
				cout << "You casted Arctic Rain, you lost 100 MANA" << endl;
				pArcticRain(player, enemy, player.MANA, enemy.HP);
				Sleep(1000);
				ColorPicker(12);
				cout << "You dealt 80 damage to the enemy wizard" << endl;
				ColorPicker(15);
				pManaRegen(player);
				eManaRegen(enemy);
				playerTurn = false;
				enemyTurn = true;
			}

			if(input == 3 && player.MANA < 100)
			{
				ColorPicker(6);
				cout << "You dont have enough mana for that!" << endl;
				ColorPicker(15);
				Sleep(1000);
			}



			if (input == 4 && player.MANA >= 20)
			{
				ColorPicker(14);
				cout << "You decide to heal. Are you magical enough?" << endl;
				ColorPicker(15);
				pHealingTouch(player, player.MANA, hChance);
				Sleep(1000);
				pManaRegen(player);
				eManaRegen(enemy);
				playerTurn = false;
				enemyTurn = true;
			}
			
			if(input == 4 && player.MANA < 20)
			{
				ColorPicker(6);
				cout << "You dont have enough mana for that!" << endl;
				ColorPicker(15);
				Sleep(1000);
			}


			if (player.MANA < 10)
			{
				ColorPicker(6);
				cout << "You dont have enough mana for anything" << endl;
				ColorPicker(15);
				pManaRegen(player);
				playerTurn = false;
				enemyTurn = true;
			}
			if (enemy.MANA < 10)
			{
				playerTurn = true;
				enemyTurn = false;
				eManaRegen(enemy);
			}
		}

		
	isAlive = player.HP > 0 && enemy.HP > 0;

	}
}