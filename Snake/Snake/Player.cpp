#include "Player.h"
#include <iostream>
using namespace std;

void Player::PlayerInit(int setX, int setY, int direction, Level& level)
{
	level.setPosition(setY, setX, 'G');
	srand(time(0));
	int length = 4;
	int direct = rand() % 3;

	while (length)
	{
		NextPlayer = new Player(1);
		length--;
	}
}

//Player::Player(Player* pl, int numb)
//{
//	NextPlayer = pl;
//}
Player::Player(const int n)
{
	if (n == 15)
	{
		NumberPlayer = n;
		NextPlayer = new Player(n + 1);
	}
}
Player::Player()
{
}

Player::~Player()
{
	//cout << endl << this << endl;
}
