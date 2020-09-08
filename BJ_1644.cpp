//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N;
//int num[4000001];
//int cnt;
//
//vector<int> prime;
//
//void Eratos()
//{
//	for (int i = 2; i< N + 1; i++)
//	{
//		if (num[i] == 0)
//			for (int j = 2; i*j<N + 1; j++)
//				num[i*j] = 1;
//	}
//}
//
//void solve()
//{
//	Eratos();
//	for (int i = 2; i < N + 1; i++)
//		if (!num[i]) prime.push_back(i);
//
//	int s = 0, e = 0;
//	int sum = 0, len = prime.size();
//	while (s < len)
//	{
//		if (sum == N)
//			cnt++;
//
//		if (sum >= N)
//		{
//			sum -= prime[s];
//			s++;
//		}
//		else
//		{
//			if (e == len) break;
//			sum += prime[e];
//			e++;
//		}
//	}
//
//	cout << cnt;
//}
//
//int main()
//{
//	// your code goes here
//	cin >> N;
//	solve();
//	return 0;
//}