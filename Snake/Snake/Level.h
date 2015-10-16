#pragma once

//#include "Level.h"
//#include "Player.h"
#include <string>
#include <vector>
#include <ctime>
class Player;
using namespace std;

class Level
{
public:
	void LoadMap(string, Player&);
	void PrintLevel();
	void setPosition(int , int, char);
	Level();
	~Level();
private:
	vector<string> DataMap;
};


