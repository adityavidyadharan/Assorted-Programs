/*
	Program: Blackjack
	Author: Aditya Vidyadharan
	Date: 3/2/17
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

int playerSum;
int dealerSum;
int gameDone = 0;
int dealCardsVar = 1;
class Player
{
public:
	
	string cardType;
	int cardValue;
	int yes = 1;
	void dealCards()
	{
		cardValue = 0;
		int card = rand() %51 + 0;
		int newCard = card / 4;
		switch (newCard)
		{
		case 0:
			cardType = "Ace";
			cardValue = 1;
			break;
		case 1:
			cardType = "2";
			cardValue = 2;
			break;
		case 2:
			cardType = "3";
			cardValue = 3;
			break;
		case 3:
			cardType = "4";
			cardValue = 4;
			break;
		case 4:
			cardType = "5";
			cardValue = 5;
			break;
		case 5:
			cardType = "6";
			cardValue = 6;
			break;
		case 6:
			cardType = "7";
			cardValue = 7;
			break;
		case 7:
			cardType = "8";
			cardValue = 8;
			break;
		case 8:
			cardType = "9";
			cardValue = 9;
			break;
		case 9:
			cardType = "10";
			cardValue = 10;
			break;
		case 10:
			cardType = "Jack";
			cardValue = 10;
			break;
		case 11:
			cardType = "Queen";
			cardValue = 10;
			break;
		case 12:
			cardType = "King";
			cardValue = 10;
			break;
		}
		
		if (yes == 1)
		{
			cout << cardType << endl;
		}
	}
	void playerTotal()
	{
		cout << "Player total is: " << playerSum << endl;
	}
	void dealerTotal()
	{
		cout << "Dealer total is: " << dealerSum << endl;
	}
	void dealerCheck()
	{
		if (playerSum < 16)
		{
			dealCards();
			setDealerSum();
		}
	}
	void promptUserCards()
	{
		string answer;
		cout << "Do you want another card?" << endl;
		cin >> answer;
		if (answer == "yes" || answer == "Yes")
		{
			dealCards();
		}
		if (answer == "no" || answer == "No")
		{
			dealCardsVar = 0;
			dealerTotal();
			dealerWinCheck();
		}
	}

	void dealerWinCheck()
	{
		if ((dealerSum >= playerSum) && dealerSum < 21)
		{
			gameDone = 1;
			cout << "Dealer wins" << endl;
		}
		else
		{
			gameDone = 1;
			cout << "Dealer loses" << endl;
		}
	}
	void overDeal()
	{
		if (playerSum > 21)
		{
			cout << "Player loses" << endl;
			cout << "Total was: " << playerSum << endl;
			dealCardsVar = 0;
		}
		
	}


	void setDealerSum()
	{
		dealerSum = dealerSum + cardValue;
	
	}
	void setPlayerSum()
	{
		playerSum = playerSum + cardValue;
	}

};
int main()
{
	srand(time(0));
	Player player;
	Player dealer;
	dealer.yes = 0;
	cout << "Player Cards:" << endl;
		player.dealCards();
		player.setPlayerSum();
		player.dealCards();
		player.setPlayerSum();
		player.playerTotal();
		cout << "------------------------------------------------" << endl;
		
		dealer.dealCards();
		dealer.setDealerSum();
		dealer.dealCards();
		dealer.setDealerSum();
		dealer.dealerCheck();
		while (dealCardsVar == 1)
		{
			player.promptUserCards();
			if (dealCardsVar == 1)
			{
				player.setPlayerSum();
				player.playerTotal();
				cout << endl;
				player.overDeal();
			}
		}
		
		
	


	return 0;
}