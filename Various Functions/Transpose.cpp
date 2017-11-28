//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int m[3][3];
//	int t[3][3];
//	bool symmetric;
//	for (int count = 0; count < n; count++)
//	{
//		bool symmetric = true;
//
//		for (int i = 0; i < 3; i++)
//			for (int j = 0; j < 3; j++)
//				cin >> m[i][j];
//
//		for (int row = 0; row < 3; row++)
//			for (int column = 0; column < 3; column++)
//				t[column][row] = m[row][column];
//
//		for (int row = 0; row < 3; row++)
//		{
//			for (int column = 0; column < 3; column++)
//			{
//				cout << t[row][column];
//				if (column != 2)
//					cout << " ";
//			}
//			cout << endl;
//		}
//
//		for (int row = 0; row < 3; row++)
//			for (int column = 0; column < 3; column++)
//				if (t[row][column] != m[row][column])
//					symmetric = false;
//
//		if (symmetric == true)
//			cout << "symmetric" << endl;
//		else
//			cout << "not symmetric" << endl;
//	}
//}