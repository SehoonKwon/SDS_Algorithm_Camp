//#include <iostream>
//using namespace std;
//
//int N, M;
//int parent[1000001];
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 1; i < N + 1; i++)
//		parent[i] = i;
//}
//
//int myFind(int a)
//{
//	if (parent[a] == a) return a;
//	else
//	{
//		parent[a] = myFind(parent[a]); // return myFind(parent[a])로 하면 계속해서 타고 올라가야 하므로 DP처럼 중간중간 저장해야 타임아웃 안남
//		return parent[a];				// 최상위 부모 값을 저장 해놨으므로 최대 N번 탐색에서 자신->부모노드(저장한 최상위 노드) 2번으로 바뀌게 됌
//	}
//}
//
//void myUnion(int a, int b)
//{
//	int aRoot = myFind(a);
//	int bRoot = myFind(b);
//	parent[aRoot] = bRoot;
//}
//
//void solve()
//{
//	int A, B, C;
//	for (int i = 0; i < M; i++)
//	{
//		cin >> A >> B >> C;
//
//		if (A == 0)
//			myUnion(B, C);
//		else
//		{
//			int aRoot = myFind(B);
//			int bRoot = myFind(C);
//
//			if (aRoot == bRoot) cout << "YES\n";
//			else cout << "NO\n";
//		}
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