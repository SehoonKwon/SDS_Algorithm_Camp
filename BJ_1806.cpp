//#include <iostream>
//using namespace std;
//
//int N, S;
//int Array[100001];
//
//void input()
//{
//	cin >> N >> S;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void solve()
//{
//	int s = 0, e = 0, sum = 0;
//	int len = 987654321;
//
//	while (s < N)
//	{
//		if (sum >= S)
//		{
//			int temp = e - s;
//			if (temp < len) len = temp;
//		}
//
//		if (sum >= S)
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
//	if (len == 987654321) cout << 0;
//	else cout << len;
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