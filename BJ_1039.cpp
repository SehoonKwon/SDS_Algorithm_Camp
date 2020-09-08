//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int K;
//int MAX;
//int visit[11][1000001];
//string s;
//
//struct point
//{
//	int cnt;
//	string str;
//};
//
//queue<point> q;
//vector<string> v, ans;
//
//void BFS()
//{
//	q.push({ 0, s });
//	v.push_back(s);
//
//	while (!q.empty())
//	{
//		string S = q.front().str;
//		int cnt = q.front().cnt;
//		q.pop();
//
//		if (cnt == K)
//			ans.push_back(S);
//		else if (cnt < K)
//		{
//			for (int i = 0; i < S.size(); i++)
//
//			{
//				for (int j = 0; j < S.size(); j++)
//				{
//					if (i == j) continue;
//					string nS = S;
//					swap(nS[i], nS[j]);
//					if (nS[0] == '0') continue;
//
//					int val = stoi(nS);
//					if (visit[cnt + 1][val] == false)
//					{
//						visit[cnt + 1][val] = true;
//						q.push({ cnt + 1, nS });
//					}
//
//				}
//			}
//		}
//	}
//}
//
//void solve()
//{
//	BFS();
//	if (ans.size() == 0)
//	{
//		cout << "-1";
//		return;
//	}
//
//	for (int i = 0; i < ans.size(); i++)
//		if (MAX < stoi(ans[i])) MAX = stoi(ans[i]);
//
//	cout << MAX;
//}
//
//int main()
//{
//	cin >> s >> K;
//	solve();
//	return 0;
//}