//#include <iostream>
//using namespace std;
//
////���ʿ��� M���� N��(�ִ�� �����Ƿ�)�� ����. ��ġ�� �ȵǹǷ� �ᱹ mCn�̴�.(??)
////���� � �� n������ ���� �� n���� ���� ����� �� 1����. ���� ���� �� m������ n�� ���� �� n���� ���ϴ� ������ ����
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