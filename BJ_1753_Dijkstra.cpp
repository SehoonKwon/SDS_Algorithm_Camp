//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//#define INF 987654321
//
//int V, E, K;
//int dist[20001];
//
//struct point
//{
//	int dest;
//	int val;
//};
//
//vector<point> v[20001];
//
//void input()
//{
//	cin >> V >> E >> K;
//	for (int i = 0; i < E; i++)
//	{
//		int a, b, w;
//		cin >> a >> b >> w;
//		v[a].push_back({ b, w });
//	}
//}
//
////pq는 struct cmp + 연산자 오버로딩 필요. + pq는 부등호가 반대
//struct cmp
//{
//	bool operator()(point& u, point& v)
//	{
//		if (u.val > v.val) return true;
//		else return false;
//	}
//};
//
//void solve()
//{
//	//초기화
//	for (int i = 1; i < V + 1; i++)
//		dist[i] = INF;
//
//	priority_queue<point, vector<point>, cmp> pq;
//	pq.push({ K, 0 }); //시작점 넣기
//
//	while (!pq.empty())
//	{
//		int V = pq.top().dest;
//		int val = pq.top().val;
//		pq.pop();
//
//		if (dist[V] != INF) continue;
//		dist[V] = val;
//
//		for (int i = 0; i < v[V].size(); i++)
//		{
//			int next = v[V][i].dest;
//			int d = v[V][i].val;
//
//			pq.push({ next, val + d });
//		}
//	}
//
//	for (int i = 1; i < V + 1; i++)
//	{
//		if (dist[i] == INF) cout << "INF\n";
//		else cout << dist[i] << "\n";
//	}
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