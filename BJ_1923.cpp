//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N;
//int Array[501][501];
//int DP[501][501];
//
//void input()
//{
//	cin >> N;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < i + 1; j++)
//			cin >> Array[i][j];
//}
//
//void solve()
//{
//	DP[1][1] = Array[1][1];
//	for (int i = 2; i < N + 1; i++)
//	{
//		for (int j = 1; j < i + 1; j++)
//		{
//			DP[i][j] = Array[i][j] += max(DP[i - 1][j], DP[i - 1][j - 1]);
//		}
//	}
//
//	int MAX = 0;
//	for (int i = 1; i < N + 1; i++)
//		if (MAX < DP[N][i]) MAX = DP[N][i];
//
//	cout << MAX;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}