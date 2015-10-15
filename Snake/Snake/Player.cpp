#include "Player.h"
#include <iostream>
using namespace std;

void Player::PlayerInit(int setX, int setY, int direction, Level& game)
{
	game.setPosition(setY, setX);
	srand(time(0));
	int length = 4;
	int direct = rand() % 3;

	while (length)
	{
		NextPlayer = new Player(*(this));
		length--;
	}
}

//Player::Player(Player* pl)
//{
//	//PreviousPlayer = pl;
//}
Player::Player()
{
}
Player::~Player()
{
	cout << endl << this << endl;
}
