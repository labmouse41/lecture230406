#include <iostream>
#include <ctime>
#include <vector>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	FPlayer* player = new FPlayer();

	int GoblinNumber = rand() % 3 + 1;
	int SlimeNumber = rand() % 3 + 1;
	int BoarNumber = rand() % 3 + 1;

	vector<FGoblin*> Goblins;
	for (int i = 0; i < GoblinNumber; i++)
	{
		Goblins.push_back(new FGoblin());
	}
	vector<FSlime*> Slimes;
	for (int i = 0; i < GoblinNumber; i++)
	{
		Slimes.push_back(new FSlime());
	}
	vector<FBoar*> Boars;
	for (int i = 0; i < BoarNumber; i++)
	{
		Boars.push_back(new FBoar);
	}


	//////
	player->Move();

	for (int i = 0; i < Goblins.size(); i++)
	{
		Goblins[i]->Move();
	}
	for (int i = 0; i < Slimes.size(); i++)
	{
		Slimes[i]->Move();
	}
	for (int i = 0; i < Boars.size(); i++)
	{
		Boars[i]->Move();
	}
	/////

	
	delete player;

	for (int i = 0; i < Goblins.size(); i++)
	{
		delete Goblins[i];
	}
	for (int i = 0; i < Slimes.size(); i++)
	{
		delete Slimes[i];
	}
	for (int i = 0; i < Boars.size(); i++)
	{
		delete Boars[i];
	}

	return 0;
}

