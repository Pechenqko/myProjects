#include "Level.h"
#include <fstream>
#include <iostream>

using namespace std;

Level::Level()
{
}

Level::~Level()
{
	//cout << endl << "deleted System " << this << endl;
}

void Level::LoadMap(string filename, Player &player)
{
	string line("\n");
	ifstream File;
	File.open(filename);

	if (File.fail())
	{
		perror(filename.c_str());
		exit(1);
	}

	while (getline(File, line))
	{
		DataMap.push_back(line);
	}
	File.close();

	char simbol;
	for (int i = 0; i < DataMap.size(); i++)
	{
		for (int j = 0; j < DataMap[i].size(); j++)
		{
			simbol = DataMap[i][j];
			switch (simbol)
			{
			case 'a':
				break;
			case 'd' :
				break;
			case 'w':
				break;
			default:
				break;
			}
		}
	}
}

void Level::PrintLevel()
{
	system("cls");
	for (auto i = DataMap.begin(); i != DataMap.end(); *(i++))
	{
		cout << *(i) << endl;
	}
	cout << endl;
}

void Level::setPosition(int i, int j, char x) //I finished here 14.10.15
{
	DataMap[i][j] = x;
}



