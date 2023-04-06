#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

int main()
{
	FPlayer* player = new FPlayer();
	FGoblin* goblin = new FGoblin();
	FSlime* slime = new FSlime();

	player->Move();
	goblin->Move();
	slime->Move();

	delete player;
	delete goblin;
	delete slime;

	return 0;
}

