#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
//#define ON
using namespace std;

#ifdef ON
class Dice
{
public:
	void rollDice()
	{
		result = rand() % 6 + 1;;
		cout << result << endl;
	}
	int getResult()
	{
		return result;
	}
	void setSum(int value)
	{
		sum = value;
		cout << "Sum is: " << sum << endl;
	}
	void resetPause()
	{
		holdValue = "blank";
	}
	int getSum()
	{
		return sum;
	}
	void setPlayer(string name)
	{
		playerName = name;
	
	}
	string getPlayer()
	{
		return playerName;
		cout << "working" << endl;
	}
	void setRunCode(int value)
	{
		runCode = value;
	}
	int getRunCode()
	{
		return runCode;
	}
	void pause(string pass)
	{
		cout << "Type \"" <<pass <<"\" to proceed" << endl;
		cin >> holdValue;
		while (!(holdValue == pass))
		{
			cout << "Type, \"" << pass << "\" to proceed" << endl;
			cin >> holdValue;
		}
		cout << endl;
	}
	int getWinLoss()
	{
		return winloss;
	}
	void compareResult()
	{
		if (sum == 7 || sum == 11)
		{
			winloss = 1;
		}
		else if (sum == 2 || sum == 3 || sum == 12)
		{
			winloss = 0;
		}
		else
		{
			winloss = 2;
			runCode = 1;
		}
	
	}
private:
	int result;
	string holdValue;
	int sum;
	int winloss;
	int runCode;
	string playerName;
	
};

int main()
{
	srand(time(NULL));
	int buffer;
	string answer;
	Dice dice1;
	Dice dice2;
	cout << "What is your name" << endl;
	getline(cin, answer);
	dice1.setPlayer(answer);
	dice1.rollDice();
	dice2.rollDice();
	dice1.setSum(dice1.getResult() + dice2.getResult());
	dice1.compareResult();
	if (dice1.getWinLoss() == 1)
	{
		cout << "You win! " << dice1.getPlayer() << endl;
	}
	if (dice1.getWinLoss() == 0)
	{
		cout << "You lose! " << dice1.getPlayer() << endl;
	}
	else
	{
		cout << "You need to get: " << dice1.getSum() << endl;
		cout << endl;
	}
	dice1.pause("Continue");
	dice1.resetPause();
	while (dice1.getRunCode() == 1)
	{
		dice1.rollDice();
		dice2.rollDice();
		buffer = dice1.getResult() + dice2.getResult();
		cout << "Sum is: " << buffer << endl;
		cout << endl;
		if (buffer == dice1.getSum())
		{
			dice1.setRunCode(0);
			cout << "You won " << dice1.getPlayer() << endl;

		}
		if (buffer == 7)
		{
			dice1.setRunCode(0);
			cout << "You lose " <<dice1.getPlayer() << endl;
		}
		if (dice1.getRunCode() == 1)
		{
			dice1.pause("Roll again");
			dice1.resetPause();
		}
	}
	cout << "Game Over" << endl;
	dice1.pause("Exit Game");
	dice1.resetPause();
	return 0;
}

#endif ON