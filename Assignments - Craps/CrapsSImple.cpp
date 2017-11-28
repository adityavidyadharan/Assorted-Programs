#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
using namespace std;
int firstDice;
int secondDice;
int sum;
int newSum;
void rollDice()
{
	firstDice = rand() % 6 + 1;
	secondDice = rand() % 6 + 1;
	cout << "You rolled: " << firstDice << "\t" << secondDice << "\t";
}
void suM()
{
	sum = firstDice + secondDice;
	cout << "Which is a sum of: " << sum << endl;
}
void newerSum()
{
	newSum = firstDice + secondDice;
	cout << "Which is a sum of: " << newSum << endl;
}
void noWin()
{
	cout << "You need to get: " << sum << endl;
	int end = 0;
	while (1)
	{
		rollDice();
		newerSum();
		if (newSum == sum)
		{
			cout << "Player wins" << endl;
			break;
		}
		if (newSum == 7)
		{
			cout << "Player loses" << endl;
			break;
		}
	}
}
int main()
{
	srand(time(NULL));
	cout << "Hello and welcome to a game of craps" << endl;
	Sleep(1000);
	rollDice();
	suM();
	switch (sum)
	{
	case 7:
		cout << "You have won" << endl;
		break;
	case 11:
		cout << "You have won" << endl;
		break;
	case 2:
		cout << "You have lost" << endl;
		break;
	case 3:
		cout << "You have lost" << endl;
		break;
	case 12:
		cout << "You have lost" << endl;
		break;
	default:
		noWin();
	}
}