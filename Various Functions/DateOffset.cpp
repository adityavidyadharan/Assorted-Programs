///*
//	Name: Aditya Vidyadharan
//	Program: Date offset
//	Date: 3/21/17
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int month, ogmonth;
//	int day, ogday;
//	int year, ogyear;
//	int offset;
//	cin >> n;
//	for (int count = 0; count < n; count++)
//	{
//		cin >> ogmonth;
//		month = ogmonth;
//		cin >> ogday;
//		day = ogday;
//		cin >> ogyear;
//		year = ogyear;
//		cin >> offset;
//		day += offset;
//		if (day > 30)
//		{
//			int temp = day / 30;
//			month += temp;
//			day = day - (temp*30);
//		}
//		if (month > 12)
//		{
//			int temp = month / 12;
//			year += temp;
//			month = month % 12;
//		}
//		cout << ogmonth << "/" << ogday << "/" << ogyear << " offset by " << offset << " becomes ";
//		cout << month << "/" << day << "/" << year << endl;
//	}
//}