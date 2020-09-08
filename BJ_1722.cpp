//#include <iostream>
//#include <vector>
//using namespace std;
//
////k번째를 구하는 문제의 경우 사전과 비슷하지만 query(재귀)로 풀어보기, N=4일때 4! = 3! * 4칸 = 2! * 12칸 
////순열의 번호를 묻는 문제 = 자기보다 낮은 수가 자기 칸에 오는 경우의 수를 count, 자기 선택 시엔 count + 0, 마지막은 자기번호 선택이므로 +1
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