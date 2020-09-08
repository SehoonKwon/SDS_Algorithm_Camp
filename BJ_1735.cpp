//#include <iostream>
//using namespace std;
//
//int gcd(int A, int B)
//{
//	while (B != 0)
//	{
//		int temp = A%B;
//		A = B;
//		B = temp;
//	}
//
//	return A;
//}
//
//int main()
//{
//	int A, B, C, D;
//	cin >> A >> B >> C >> D;
//
//	int sum = A*D;
//	sum += B*C;
//
//	int m = B*D;
//	int mygcd = gcd(sum, m);
//
//	if (mygcd == 1) cout << sum << " " << m;
//	else cout << sum/mygcd << " " << m/mygcd;
//
//	return 0;
//}