//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N, M;
//int parent[1001];
//
//struct point
//{
//	int u;
//	int v;
//	int val;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> N >> M;
//	
//	int a, b, c;
//	for (int i = 0; i < M; i++)
//	{
//		cin >> a >> b >> c;
//		v.push_back({ a,b,c });
//	}
//}
//
//bool cmp(const point& u, const point& v)
//{
//	if (u.val < v.val) return true;
//	else return false;
//}
//
//int myFind(int a)
//{
//	if (parent[a] == a) return a;
//	else
//	{
//		parent[a] = myFind(parent[a]);
//		return parent[a];
//	}
//}
//
//void solve()
//{
//	for (int i = 1; i < N + 1; i++)
//		parent[i] = i;
//
//	sort(v.begin(), v.end(), cmp);
//
//	int sum = 0, ncnt = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		int aRoot = myFind(v[i].u);
//		int bRoot = myFind(v[i].v);
//		if (aRoot == bRoot) continue;
//
//		parent[bRoot] = aRoot;
//		sum += v[i].val;
//		ncnt++;
//		
//		if (ncnt == N - 1) break;
//	}
//
//	cout << sum;
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