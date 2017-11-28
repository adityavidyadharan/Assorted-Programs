//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int prime = 1;
//	float result;
//	if (n % 2 == 0) //check if even
//		prime = 0; //makes it composit
//	for (int count = 3; count < n; count += 2)
//	{
//		result = n % count; // check if divisible by count (increasing odd numbers
//		if (result == 0) //if it is divisible, make it composite
//		{
//			prime = 0;
//			break;
//
//		}
//	}
//	if (n == 2) //if the number was 2, it is prime
//		cout << "The number is prime" << endl;
//	if (prime == 1 && !(n == 2)) //if it is prime, and not two (so it doesn't display prime twice)
//		cout << "The number is prime" << endl;
//	if (prime == 0 && !(n == 2))
//		cout << "The number is composite" << endl;
//	return 0;
//}