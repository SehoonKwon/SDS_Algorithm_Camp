//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//#define INF 987654321
//
////어떤 노드에 방문한 순서가 거리순과 같다 => 그냥 다익스트라 하면서 dist배열을 2차원으로 순서까지 관리하면 된다. 
//
//int N, M, K;
//int dist[1001][101];
//
//struct point
//{
//	int dest;
//	int val;
//};
//
//struct cmp
//{
//	bool operator()(point& u, point& v)
//	{
//		if (u.val > v.val) return true;
//		else return false;
//	}
//};
//
//vector<point> v[1001];
//
//void input()
//{
//	cin >> N >> M >> K;
//	for (int i = 0; i < M; i++)
//	{
//		int a, b, w;
//		cin >> a >> b >> w;
//		v[a].push_back({ b, w });
//	}
//}
//
//void Dijkstra()
//{
//	priority_queue<point, vector<point>, cmp> pq;
//	pq.push({ 1, 0 });
//
//	while (!pq.empty())
//	{
//		int u = pq.top().dest;
//		int val = pq.top().val;
//		pq.pop();
//
//		int flag = 0;
//		for (int i = 1; i < K + 1; i++)
//		{
//			if (dist[u][i] == INF)
//			{
//				flag = 1;
//				dist[u][i] = val;
//				break;
//			}
//		}
//		if (!flag) continue;
//
//		for (int i = 0; i < v[u].size(); i++)
//		{
//			int next = v[u][i].dest;
//			int d = v[u][i].val;
//
//			pq.push({ next, val + d });
//		}
//	}
//}
//
//void solve()
//{
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 0; j < K + 1; j++)
//			dist[i][j] = INF;
//
//	Dijkstra();
//
//	for (int i = 1; i < N + 1; i++)
//	{
//		if (dist[i][K] == INF) cout << -1 << "\n";
//		else cout << dist[i][K] << "\n";
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