#include <iostream>
#include "Player.h"
using namespace std;

int main()
{
	FPlayer* player = new FPlayer();

	cout << player << endl;

	delete player;

	return 0;
}

