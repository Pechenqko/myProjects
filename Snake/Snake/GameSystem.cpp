#include "GameSystem.h"
#include <fstream>
#include <iostream>
#include <thread>

using namespace std;

GameSystem::GameSystem(){}
GameSystem::~GameSystem()
{
}
GameSystem::GameSystem(string filename)
{
	cout << " Welcome to game is called 'Snake' version 0.0.1 \nEnter a move command (w/s/a/d) \n";
	system("pause");
	_level.LoadMap(filename, _player);
	_player.PlayerInit(NOWX, NOWY, NOWDIRECTION, _level);
	_level.PrintLevel();

	GamePlay();
}

void GameSystem::GamePlay()
{
	int start = clock();
	cout << start << "  new  " << clock();
}


// :warning: 



