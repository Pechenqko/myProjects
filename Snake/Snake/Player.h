
#pragma once
//#include "Level.h"
//#include "Player.h"
//#include <string>
#include <vector>
#include "Level.h"
using namespace std;

class Player
{
public:
	void PlayerInit(int, int, int, Level&);
	Player(const :int);
	//Player(Player*);
	~Player();
	Player();
private:
	int nowX;
	int nowY;
	int direct;
	//Player* PreviousPlayer;
	Player* NextPlayer;
	int NumberPlayer;
	//vector <int> snake;
};




