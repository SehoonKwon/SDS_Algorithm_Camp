//#include <iostream>
//#include <vector>
//using namespace std;
//
////k��°�� ���ϴ� ������ ��� ������ ��������� query(���)�� Ǯ���, N=4�϶� 4! = 3! * 4ĭ = 2! * 12ĭ 
////������ ��ȣ�� ���� ���� = �ڱ⺸�� ���� ���� �ڱ� ĭ�� ���� ����� ���� count, �ڱ� ���� �ÿ� count + 0, �������� �ڱ��ȣ �����̹Ƿ� +1
//
//int N;
//long long int K;
//int Array[21];
//int visit[21];
//long long int DP[21];
//vector<int> v;
//
//void input()
//{
//	int t;
//	cin >> N;
//	cin >> t;
//	if (t == 1)
//		cin >> K;
//	else
//	{
//		for (int i = 0; i < N; i++)
//			cin >> Array[i];
//	}
//}
//
//void MakeDP()
//{
//	DP[0] = 1, DP[1] = 1;
//	for (int i = 2; i <= N; i++)
//		DP[i] = DP[i - 1] * i;
//}
//
//void query(int num, long long int k)
//{
//	if (num == 0) return;
//	long long int x = DP[num - 1];
//	for (int i = 1; i < N + 1; i++)
//	{
//		if (visit[i] == true) continue;
//
//		if (k <= x)
//		{
//			visit[i] = true;
//			v.push_back(i);
//			query(num - 1, k);
//		}
//		else
//			k -= x;
//	}
//}
//
//void solve()
//{
//	MakeDP();
//
//	if (K > 0)
//	{
//		query(N, K);
//		for (int i = 0; i < v.size(); i++)
//			cout << v[i] << " ";
//	}
//	else
//	{
//		long long int cnt = 0;
//		int len = N;
//		for (int i = 0; i < len; i++)
//		{
//			long long int x = DP[N - 1];
//
//			for (int j = 1; j < len + 1; j++)
//			{
//				if (visit[j] == true)	continue;
//				if (Array[i] == j)
//				{
//					visit[j] = true;
//					N--;
//					break;
//				}
//				else
//					cnt += x;
//			}
//		}
//
//		cout << cnt + 1;
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}