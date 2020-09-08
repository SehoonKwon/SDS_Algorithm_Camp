//#include <iostream>
//using namespace std;
//
////동쪽에서 M개중 N개(최대로 지으므로)를 고른다. 겹치면 안되므로 결국 mCn이다.(??)
////동쪽 어떤 점 n개에서 서쪽 점 n개를 고르는 방법은 단 1가지. 따라서 동쪽 점 m개에서 n과 이을 점 n개를 구하는 문제와 같다
//
//int N, M;
//long long int DP[31][31];
//
//void MakeDP()
//{
//	for (int i = 0; i <= 30; i++)
//	{
//		for (int j = 0; j <= 30; j++)
//		{
//			if (j == 0 || j == i) DP[i][j] = 1;
//			else
//				DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j];
//		}
//	}
//}
//
//void solve()
//{
//	cin >> N >> M;
//	
//	//mCn
//	long long int ans = DP[M][N];
//	cout << ans << "\n";
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	MakeDP();
//	while (T--)
//		solve();
//	return 0;
//}