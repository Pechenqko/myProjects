#include "GameSystem.h"
#include <clocale>

using namespace std;

int main(int argc, char**argv)
{
	setlocale(0, "russia");
	GameSystem game("map.txt");
	system("pause");
	return 0;
}