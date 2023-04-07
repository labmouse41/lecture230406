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
	int randNum = rand() % 3 + 1;

	vector<FCharacter*> Characters;
	Characters.push_back(new FPlayer());

	randNum = rand() % 3 + 1;
	for (int i = 0; i < randNum; i++)
	{
		Characters.push_back(new FGoblin());
	}
	randNum = rand() % 3 + 1;
	for (int i = 0; i < randNum; i++)
	{
		Characters.push_back(new FSlime());
	}
	randNum = rand() % 3 + 1;
	for (int i = 0; i < randNum; i++)
	{
		Characters.push_back(new FBoar());
	}

	for (int i = 0; i < Characters.size(); i++)
	{
		Characters[i]->Move();
	}

	for (int i = 0; i < Characters.size(); i++)
	{
		delete Characters[i];
	}
	

	return 0;
}

