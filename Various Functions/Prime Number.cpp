///*
//	Name: Aditya Vidyadharan
//	Program: Prime
//	Date: 3/21/17
//*/
//
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int number;
//	
//	cin >> n;
//	bool flag = false;
//	bool check = true;
//	ifstream cases;
//	cases.open("../testcases.txt");
//	for (int count = 0; count < n; count++)
//	{
//		cases >> number;	
//		if (number == 2 && check == true)
//		{
//			flag = true;
//			check = false;
//		}
//		if (number <= 1 && check == true)
//		{
//			flag = false;
//			check = false;
//		}
//		if (number % 2 == 0 && check == true)
//		{
//			flag = false;
//			check = false;
//		}
//		for (int count = 3; count < number && check == true; count += 2)
//		{
//			if (number % count == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag == true)
//			cout << number << " \tPrime" << endl;
//		if (flag == false)
//		cout << number << " \tNot Prime" << endl;
//		cout << endl;
//		flag = true;
//		check = true;
//	}
//	
//}