//#include <iostream>
//using namespace std;
//
////Two pointer, s가 가리키는 곳은 포함, e가 가리키는 곳은 미포함 [s, e) 
//
//int N, M;
//int Array[10001];
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void solve()
//{
//	int cnt = 0;
//	int s = 0, e = 0;
//	
//	int sum = 0;
//	while (s < N)
//	{
//		if (sum == M)
//			cnt++;
//		
//		if (sum >= M)
//		{
//			sum -= Array[s];
//			s++;
//		}
//		else
//		{
//			if (e == N) break;
//			sum += Array[e];
//			e++;
//		}
//	}
//
//	cout << cnt;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	input();
//	solve();
//	return 0;
//}