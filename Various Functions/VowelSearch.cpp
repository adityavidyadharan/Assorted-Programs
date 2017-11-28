//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char word[80];
//	char test;
//	cin.getline(word, 80);
//	int a = 0;
//	int e = 0;
//	int i = 0;
//	int o = 0;
//	int u = 0;
//	for (int count = 0; word[count] != '\0'; count++)
//	{
//		
//		switch (word[count])
//		{
//		case 'a':
//			cout << "Vowel at position: " << count + 1 << endl;
//			a++;
//			break;
//		case 'e':
//			cout << "Vowel at position: " << count + 1 << endl;
//			e++;
//			break;
//		case 'i':
//			cout << "Vowel at position: " << count + 1 << endl;
//			i++;
//			break;
//		case 'o':
//			cout << "Vowel at position: " << count + 1 << endl;
//			o++;
//			break;
//		case 'u':
//			cout << "Vowel at position: " << count + 1 << endl;
//			u++;
//			break;
//		}
//		
//	}
//	//histogram
//	cout << "A: ";
//	for (int count = 0; count < a; count++)
//		cout << '*';
//	cout << endl;
//	cout << "E: ";
//	for (int count = 0; count < e; count++)
//		cout << '*';
//	cout << endl;
//	cout << "I: ";
//	for (int count = 0; count < i; count++)
//		cout << '*';
//	cout << endl;
//	cout << "O: ";
//	for (int count = 0; count < o; count++)
//		cout << '*';
//	cout << endl;
//	cout << "U: ";
//	for (int count = 0; count < u; count++)
//		cout << '*';
//	cout << endl;
//}