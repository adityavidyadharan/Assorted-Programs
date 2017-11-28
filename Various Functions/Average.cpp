/*
Program: Average
Author: Monkey
Date: 2/21/17

#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int average;
	int n;
	int number;
	int a = 0;

	cin >> n;
	while(a < n)
	{
		cin >> number;
		sum = sum + number;
		a++;
	}
	average = sum / n;
	cout << "Your average is: " << average << endl;
}
*/