#include "Player.h"
#include <iostream>
using namespace std;

void Player::PlayerInit(int setX, int setY, int direction, Level& level)
{
	level.setPosition(setY, setX, 'G');
	srand(time(0));
	int direct = rand() % 3;

}
// :war
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
