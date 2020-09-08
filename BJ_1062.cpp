//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////anta tica도 고려해야됌. 따라서 antic 5개의 글자는 반드시 필요
//
//int N, K;
//int MAX;
//int visit[128];
//string s[51];
//
//void input()
//{
//	cin >> N >> K;
//	for (int i = 0; i < N; i++)
//		cin >> s[i];
//}
//
//void DFS(int idx, int kcnt)
//{
//	if (kcnt == K)
//	{
//		int cnt = 0;
//		for (int i = 0; i < N; i++)
//		{
//			int flag = 0;
//			for (int j = 4; j < s[i].size() - 4; j++)
//			{
//				if (visit[s[i][j]] == false)
//				{
//					flag = 1;
//					break;
//				}
//			}
//
//			if (!flag) cnt++;
//		}
//		if (MAX < cnt) MAX = cnt;
//		return;
//	}
//
//	if (idx > 'z') return;
//
//	for (int i = idx; i <= 'z'; i++)
//	{
//		if (visit[i] == true) continue;
//		visit[i] = true;
//		DFS(i + 1, kcnt + 1);
//		visit[i] = false;
//	}
//}
//
//void solve()
//{
//	if (K < 5)
//	{
//		cout << '0';
//		return;
//	}
//	else
//	{
//		visit['a'] = 1;
//		visit['c'] = 1;
//		visit['n'] = 1;
//		visit['t'] = 1;
//		visit['i'] = 1;
//		K -= 5;
//		for (int i = 'a'; i <= 'z'; i++)
//			DFS(i, 0);
//
//		cout << MAX;
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	input();
//	solve();
//	return 0;
//}