//#include <iostream>
//#include <string>
//#include <vector>
//#include <cstring>
//#include <cmath>
//using namespace std;
//
//int N;
//int MAX;
//int table[27];
//int vtable[27];
//int p_table[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000 };
//int visit[101];
//string s[11];
//vector<char> v;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> s[i];
//}
//
//int trans(int n)
//{
//	int cnt = 0, sum = 0;
//	for (int i = s[n].size() - 1; i > -1; i--)
//	{
//		char c = s[n][i];
//		int val = table[c - 'A'];
//		sum += (val * p_table[cnt]);
//		cnt++;
//	}
//
//	return sum;
//}
//
//int calcul()
//{
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//		sum += trans(i);
//
//	return sum;
//}
//
//void DFS(int num, int cnt)
//{
//	if (num < 0) num = 0;
//
//	if (cnt == v.size())
//	{
//		int c = calcul();
//		if (MAX < c) MAX = c;
//		return;
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (visit[i] == true) continue;
//
//		visit[i] = true;
//		if (table[v[i] - 'A'] == false)
//		{
//			table[v[i] - 'A'] = num;
//			DFS(num - 1, cnt + 1);
//		}
//		else
//			DFS(num, cnt + 1);
//
//		table[v[i] - 'A'] = false;
//		visit[i] = false;
//	}
//}
//
//void solve()
//{
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < s[i].size(); j++)
//		{
//			if (vtable[s[i][j] - 'A'] == false)
//			{
//				vtable[s[i][j] - 'A'] = true;
//				v.push_back(s[i][j]);
//			}
//		}
//	DFS(9, 0);
//
//	cout << MAX;
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