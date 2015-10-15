#pragma once

#include "Level.h"
#include "Player.h"
//#include <string>
#include <vector>
#define NOWX 30
#define NOWY 10
#define NOWDIRECTION 1

using namespace std;

class GameSystem
{
public:
	GameSystem();
	GameSystem(string);
	void GamePlay();
	~GameSystem();
private:
	Level _level;
	Player _player;
};