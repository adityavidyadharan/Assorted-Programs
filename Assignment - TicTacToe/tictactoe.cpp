#include <iostream>
#include <string>
#include <Windows.h>

#define DEBUG
using namespace std;
char boxes[3][3];
int turns = 0;
#define time 0
void draw()
{
	cout <<
		"    0        1      2" << endl;
	Sleep(time);
	cout <<
		"        |        |     " << endl;
	Sleep(time);
	cout <<
		"0  " << boxes[0][0] << "    |   " << boxes[0][1] << "    |   " << boxes[0][2] << "  " << endl;
	Sleep(time);
	cout <<
		"        |        |     " << endl;
	Sleep(time);
	cout <<
		" _______|________|_____" << endl;
	Sleep(time);
	cout <<
		"        |        |     " << endl;
	Sleep(time);
	cout <<
		"1  " << boxes[1][0] << "    |   " << boxes[1][1] << "    |   " << boxes[1][2] << "  " << endl;
	Sleep(time);
	cout <<
		"        |        |     " << endl;
	Sleep(time);
	cout <<
		" _______|________|_____" << endl;
	Sleep(time);
	cout <<
		"        |        |     " << endl;
	Sleep(time);
	cout <<
		"2  " << boxes[2][0] << "    |   " << boxes[2][1] << "    |   " << boxes[2][2] << "  " << endl;
	Sleep(time);
	cout <<
		"        |        |     " << endl;
	Sleep(time);
}
class Player
{
public:
#ifdef DEBUG
	string answerOne;
	string answerTwo;
	int breakCheck = 0;
	int answerX;
	int answerY;
	char cell1;
	char cell2;
	char cell3;
	string name;
	int playerNumber;
	bool runCode = 1;
#endif
	char getLetter()
	{
		return letter;
	}
	void setLetter(char let)
	{
		letter = let;
	}
	void clear()
	{
		system("CLS");
	}
	void setName(int number)
	{
		cout << "What is your name player " << number << " ?" << endl;
		cin >> name;
	/*	if (name == "Sharanya" || name == "sharanya")
		{
			cout << "You're stupid" << endl;
		}
		if (name == "Aditya" || name == "aditya" || name == "Curious George" || name ==
			"curious george" || name == "shithead" || name == "monkey" || name == "Monkey")
		{
			cout << "You rock" << endl;
		}
		if (name == "Mehraaj" || name == "mehraaj" || name == "avaneen" || name == "Avaneen")
		{
			cout << "You ugly" << endl;
		}
		if (name == "Danielle" || name == "dani" || name == "Dani" || name == "danielle" || name == "shorty" || name == "Shorty")
		{
			cout << "Go watch kdrama and play piano" << endl;
		}
		if (name == "Sohum" || name == "sohum")
		{
			cout << "Go play Agario" << endl;
		}
		if (name == "Aashita" || name == "Grover" || name == "aashita" || name == "grover")
		{
			cout << "you short" << endl;
		}
		if (name == "Serena" || name == "serena")
		{
			cout << "you short" << endl;
		}*/
		cout << "You are: " << letter << endl;
	}
	void prompt()
	{
		cout << name << " enter column: ";
		cin >> answerX;
		answerOne = answerX;
		cout << name << " enter row: ";
		cin >> answerY;
		answerTwo = answerY;
	}
#ifdef DEBUG
	void checkEnd()
	{
		if (answerOne == "end game")
		{
			breakCheck = 1;
		}

	}
#endif
	void getArrayColumn(int x)
	{
		cell1 = boxes[0][x];
		cell2 = boxes[1][x];
		cell3 = boxes[2][x];
	}
	void getArrayRow(int y)
	{
		cell1 = boxes[y][0];
		cell2 = boxes[y][1];
		cell3 = boxes[y][2];
	}
	void getArrayDiagonal(int x0, int x1, int x2)
	{
		cell1 = boxes[0][x0];
		cell2 = boxes[1][x1];
		cell3 = boxes[2][x2];
	}
	void showAnswer()
	{
		do
		{
			if (!(boxes[answerY][answerX] == 'x' || boxes[answerY][answerX] == 'y') && answerX >= 0 && answerX <= 2 && answerY >= 0 && answerY <= 2)
			{
				boxes[answerY][answerX] = letter;
				draw();
				break;
			}
			else
			{
				cout << "Invalid input" << endl;
				prompt();
			}
		} while (1);
	}
	void win()
	{
		runCode = 0;
		clear();
		draw();
		cout << "Congratulations, " << name << " you won!" << endl;
	}
	void tie()
	{
		runCode = 0;
		clear();
		draw();
		cout << "Game has ended in tie" << endl;
	}
	void checkWin()
	{
		getArrayColumn(0);
		if (cell1 == letter && cell2 == letter && cell3 == letter)
		{
			win();
		}
		getArrayColumn(1);
		if (cell1 == letter && cell2 == letter && cell3 == letter)
		{
			win();
		}
		getArrayColumn(2);
		if (cell1 == letter && cell2 == letter && cell3 == letter)
		{
			win();
		}
		getArrayRow(0);
		if (cell1 == letter && cell2 == letter && cell3 == letter)
		{
			win();
		}
		getArrayRow(1);
		if (cell1 == letter && cell2 == letter && cell3 == letter)
		{
			win();
		}
		getArrayRow(2);
		if (cell1 == letter && cell2 == letter && cell3 == letter)
		{
			win();
		}
		getArrayDiagonal(0, 1, 2);
		if (cell1 == letter && cell2 == letter && cell3 == letter)
		{
			win();
		}
		getArrayDiagonal(2, 1, 0);
		if (cell1 == letter && cell2 == letter && cell3 == letter)
		{
			win();
		}
		if (turns == 9)
		{
			tie();
		}
	}

private:
	char letter;
};
int main()
{

	draw();
	Player player1;
	Player player2;
	player1.setLetter('x');
	player2.setLetter('o');
	player1.setName(1);
	player2.setName(2);
	Sleep(1000);
	while (player1.runCode == 1 && player2.runCode == 1)
	{
		player1.clear();
		draw();
		player1.prompt();
		player1.checkEnd();
		if (player1.breakCheck == 1)
		{
			break;
		} //check if user wants to end game
		player1.showAnswer();
		player1.checkWin();
		turns++;
		if (turns == 9)
		{
			player1.tie();
			break;
		}
		if (player1.runCode == 0)
			break;
		player2.clear();
		draw();
		player2.prompt();
		if (player2.breakCheck == 1)
		{
			player1.runCode = 0;
		} //check if player wanted to end game
		player2.showAnswer();
		player2.checkWin();
		turns++;
		if (turns == 9)
		{
			player2.tie();
			break;
		}
	}

	cout << "Game over" << endl;
	Sleep(3000);
}