//#include <iostream>
//#include <vector>
//using namespace std;
//
////K가 최대 10억. N, M 100이면 unsigned long long 이어도 오버플로우
////K가 10억까지다 == DP값이 10억이 넘어가면 모두 동일시한다
//
//#define MAX 1000000000
//
//int N, M, K;
//int DP[201][201];
//vector<char> v;
//
//void MakeDP()
//{
//	int n = N + M;
//	for (int i = 0; i <= n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i) DP[i][j] = 1;
//			else
//			{
//				DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j];
//				if (DP[i][j] > MAX) DP[i][j] = MAX;
//			}
//		}
//	}
//}
//
//void solve()
//{
//	MakeDP();
//
//	if (DP[N + M][N] < K)
//	{
//		cout << -1;
//		return;
//	}
//	
//	while (N + M > 0 )
//	{
//		if (N == 0 || M == 0)
//		{
//			if (N > 0)
//			{
//				v.push_back('a');
//				N--;
//			}
//			else if (M > 0)
//			{
//				v.push_back('z');
//				M--;
//			}
//			continue;
//		}
//
//		int NM = N + M;
//		if (K <= DP[NM-1][N-1])
//		{
//			N--;
//			v.push_back('a');
//		}
//		else
//		{
//			K -= DP[NM-1][N-1];
//			M--;
//			v.push_back('z');
//		}
//	}
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i];
//}
//
//int main()
//{
//	cin >> N >> M >> K;
//	solve();
//	return 0;
//}