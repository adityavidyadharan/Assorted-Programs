//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	
//	cin >> n;
//	//loop for number of sets of grades
//	for (int count = 0; count < n; count++)
//	{
//		int numberGrades;
//		char grade;
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		int d = 0;
//		int f = 0;
//		char largestLetter = 'A';
//		int largestValue;
//		cin >> numberGrades;
//		//loop for incrementing grades
//		for (int count = 0; count < numberGrades; count++)
//		{
//			cin >> grade;
//			//incrementing of grades
//			switch (grade)
//			{
//			case 'A':
//				a++;
//				break;
//			case 'B':
//				b++;
//				break;
//			case 'C':
//				c++;
//				break;
//			case 'D':
//				d++;
//				break;
//			case 'F':
//				f++;
//				break;
//			}
//		}
//		//display histogram
//		{
//			cout << "A: ";
//			for (int count = 0; count < a; count++)
//				cout << "*";
//			cout << endl;
//			cout << "B: ";
//			for (int count = 0; count < b; count++)
//				cout << "*";
//			cout << endl;
//			cout << "C: ";
//			for (int count = 0; count < c; count++)
//				cout << "*";
//			cout << endl;
//			cout << "D: ";
//			for (int count = 0; count < d; count++)
//				cout << "*";
//			cout << endl;
//			cout << "F: ";
//			for (int count = 0; count < f; count++)
//				cout << "*";
//			cout << endl;
//		}
//		//determine mode
//		{	
//			largestValue = a;
//			largestLetter = 'A';
//		
//			if (b > largestValue)
//			{
//				largestValue = b;
//				largestLetter = 'B';
//			}
//			if (c > largestValue)
//			{
//				largestValue = c;
//				largestLetter = 'C';
//			}
//			if (d > largestValue)
//			{
//				largestValue = d;
//				largestLetter = 'D';
//			}
//			if (f > largestValue)
//			{
//				largestValue = f;
//				largestLetter = 'F';
//			}
//		}
//		//display mode
//		cout << "Mode: " << largestLetter << endl;
//	}
//}