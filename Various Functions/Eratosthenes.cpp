//#include <iostream>
//using namespace std;
//void eliminate(int start, int number, int []);
//
//int main()
//{
//	int n[1000];
//	int number;
//	cout << "Enter a number: " << endl;
//	cin >> number;
//	for (int count = 2; count <= number; count++)
//	{
//		n[count] = count;
//	}
//	int passing = 2;x	
//	while (passing <= number)
//	{
//		eliminate(passing, number, n);
//		passing++;	
//	}
//	for (int count = 2; count <= number; count++)
//		if (n[count] != 0)
//			cout << n[count] << ", ";
//}
//
//void eliminate(int start, int number, int arr[])
//{
//	int temp = start;
//	temp += start;
//	while (temp <= number)
//	{
//		arr[temp] = 0;
//		temp += start; 
//	}
//}