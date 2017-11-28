///*
//	Program: LargestSmallest
//	Author: Vidyadharan, Aditya
//	Date: 2/24/17
//*/
//#include <iostream>
//using namespace std;
//
////#define DEBUG
//
//#ifdef DEBUG
//int main()
//{
//	int n;
//	int smallest;
//	int largest;
//	int number;
//	int firstRun = 1;
//	int firstNumber;
//
//	cin >> n;
//	cin >> firstNumber;
//	for (int count = 1; count < n; count++)
//	{
//		cin >> number;
//		if (firstRun == 1)
//		{
//			firstRun = 0;
//			if (number < firstNumber)
//			{
//				smallest = number;
//				largest = firstNumber;
//			}
//			if (number > firstNumber)
//			{
//				smallest = firstNumber;
//				largest = number;
//			}
//			/*
//			if (number == firstNumber)
//			{
//				smallest = number;
//				largest = number;
//			}*/
//		}
//		if (firstRun == 0)
//		{
//			if (number < smallest)
//			{
//				smallest = number;
//			}
//			if (number > largest)
//			{
//				largest = number;
//			}
//		}
//	}
//	cout << "The largest of " << n << " numbers is " << largest << endl;
//	cout << "The smallest of " << n << " numbers is " << smallest << endl;
//	return 0;
//}
//#endif