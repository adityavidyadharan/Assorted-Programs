//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "Enter a number in decimal format: " << endl;
//	int number;
//	cin >> number;
//	int arr[100];
//	int count = 0;
//	if (number == 0)
//		arr[0] = 0;
//	while (number != 0)
//	{
//		if (number % 2)
//		{
//			arr[count] = number % 2;
//			number = number / 2;
//		}
//		else
//		{
//			arr[count] = number % 2;
//			number = number / 2;
//		}
//		count++;
//	}
//	count--;
//	for (; count >= 0; count--)
//		cout << arr[count];
//}