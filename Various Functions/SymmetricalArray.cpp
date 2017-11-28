//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int mat[50][50];
//	int n;
//	int d;
//	bool horizontal = true, vertical = true;
//	cin >> n;
//	cin >> d;
//	for (int i = 0; i < n; i++)
//	{
//		//input
//		for (int c = 0; c < d; c++)
//		{
//			for (int t = 0; t < d; t++)
//			{
//				cin >> mat[c][t];
//			}
//		}
//		if (d % 2 == 0)
//		{
//			//vertical
//			for (int r = 0; r <= (d / 2 - 1); r++)
//			{
//				for (int c = 0; c <= d - 1; c++)
//				{
//					if (mat[r][c] != mat[(d - 1) - r][c])
//					{
//						vertical = false;
//					}
//				}
//			}
//			//horizontal
//			for (int r = 0; r <= (d - 1); r++)
//			{
//				for (int c = 0; c <= d / 2 - 1; c++)
//				{
//					if (mat[r][c] != mat[r][d - 1 - c])
//						horizontal = false;
//				}
//			}
//		}
//		if (d % 2 == 1)
//		{
//			//vertical
//			for (int r = 0; r <= ((d - 1) / 2); r++)
//			{
//				for (int c = 0; c <= d - 1; c++)
//				{
//					if (mat[r][c] != mat[(d - 1) - r][c])
//						vertical == false;
//				}
//			}
//			//horizontal
//			for (int r = 0; r <= (d - 1); r++)
//			{
//				for (int c = 0; c <= ((d - 1) / 2); c++)
//				{
//					if (mat[r][c] != mat[(d - 1) - r][c])
//						horizontal == false;
//				}
//			}
//		}
//	}
//
//	if (vertical == true && horizontal == true)
//		cout << "both" << endl;
//	else if (vertical == true)
//		cout << "vertical";
//	else if (horizontal == true)
//		cout << "horizontal";
//	else
//		cout << "neither";
//
//
//	return 0;
//}