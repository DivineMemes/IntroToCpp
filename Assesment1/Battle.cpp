#include "Battle.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using std::cout;
using std::cin;
using std::endl;



void eFireBolt(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 5;
	enemy.MANA -= 10;
	player.HP -= damage;
}
//deals 15 damage for 10 mana
void pFireBolt(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 5;
	player.MANA -= 10;
	enemy.HP -= damage;
}
//deals 40 damage for 50 mana
void pLightningBolt(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 40;
	player.MANA -= 50;
	enemy.HP -= damage;
}
//deals 80 damage for 100 mana
void pArcticRain(Entity &player, Entity &enemy, int mana, int damage)
{
	damage = 80;
	player.MANA -= 100;
	enemy.HP -= damage;
}
//random chance to full heal
void pHealingTouch(Entity &player, int mana, bool chance)
{
	int hChance = rand() % 15;
	if (hChance >= 7)
	{
		player.HP += 100;
		chance = true;
		cout << "You did it dont give up you can do it" << endl;
	}
	else 
	{
		chance = false;
		cout << "You cannot heal this turn" << endl;
	}
	player.MANA -= 50;
}



//------------------------------
//seriously rework damage system
//------------------------------


void printEntity(Entity target)
{
	std::cout << "HP: " << target.HP << std::endl;
	std::cout << "MANA: " << target.MANA << std::endl;
	std::cout << "DEXTERITY: " << target.DEX << std::endl;
	std::cout << "LUCK: " << target.LUC << std::endl;
}


void battleSequence(Entity &player, Entity &enemy)
{
	bool isAlive(true);
	bool playerTurn = false;
	bool enemyTurn = false;
	bool hChance = NULL;
	int input = 0;

	if (player.DEX > enemy.DEX)
	{
		playerTurn = true;
		
	}
	else if (enemy.DEX > player.DEX)
	{
		enemyTurn = true;
	}

	while (isAlive == true)
	{
		/*cout << "Your stats: " << endl;
		printEntity(player);
		cout << endl;
		cout << "Enemy stats: " << endl;
		printEntity(enemy);*/

		if (enemyTurn == true)
		{	
			cout << "Enemy stats: " << endl;
			printEntity(enemy);
			cout << endl;
			cout << endl;
			cout << "Your stats: " << endl;
			printEntity(player);
			cout << endl;
			cout << endl;
			cout << "_____________________________________________" << endl;
			int moveSel = rand() % 4;
			
			if (moveSel == 1 && enemy.MANA >= 10)
			{
				eFireBolt(player, enemy, enemy.MANA, player.HP);
				playerTurn = true;
				enemyTurn = false;
			}

			


		}
		
		
		
		if (playerTurn == true)
		{		
			cout << "Enemy stats: " << endl;
			printEntity(enemy);
			cout << endl;
			cout << endl;
			cout << "Your stats: " << endl;
			printEntity(player);
			cout << endl;
			cout << endl;
			cout << "Choose a spell:\n Firebolt(press 1)\n Lightning Bolt(Press 2)\n Arctic Rain(press 3)\n Healing Touch(press 4)" << endl;
			cout << endl;
			cout << endl;
			cout << "_____________________________________________" << endl;
			cout << endl;
			cout << endl;
			
			cin >> input;
		
			if (input == 1 && player.MANA >= 10)
			{
				cout << "You casted FireBolt, You lost 10 MANA" << endl;
				pFireBolt(player, enemy, player.MANA, enemy.HP);
				Sleep(100);
				cout << "you did 15 damage to the enemy wizard" << endl;
				playerTurn = false;
				enemyTurn = true;
			}

			if (input == 2 && player.MANA >= 50)
			{
				cout << "You casted LightningBolt, you lost 50 MANA" << endl;
				pLightningBolt(player, enemy, player.MANA, enemy.HP);
				Sleep(100);
				cout << "You dealt 40 damage to the enemy wizard" << endl;
				playerTurn = false;
				enemyTurn = true;
			}

			if (input == 3 && player.MANA >= 100)
			{
				cout << "You casted Arctic Rain, you lost 100 MANA" << endl;
				pArcticRain(player, enemy, player.MANA, enemy.HP);
				Sleep(100);
				cout << "You dealt 80 damage to the enemy wizard" << endl;
				playerTurn = false;
				enemyTurn = true;
			}

			if (input == 4 && player.MANA >= 50)
			{
				cout << "You decide to heal. Are you magical enough?" << endl;
				pHealingTouch(player, player.MANA, hChance);
				Sleep(100);
				playerTurn = false;
				enemyTurn = true;
			}
			if (player.MANA < 10)
			{
				playerTurn = false;
				enemyTurn = true;
			}
		}

		

	isAlive = player.HP > 0 && enemy.HP > 0;


	if (enemy.HP < 0)
	{
		cout << "You WIN" << endl;


	}

	if (player.HP < 0)
	{
		cout << "You Lose" << endl;
		Sleep(1000);
		cout << "Good Bye" << endl;
		Sleep(2000);
		exit(0);
	}

	}
}
