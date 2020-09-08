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
//		parent[a] = myFind(parent[a]); // return myFind(parent[a])�� �ϸ� ����ؼ� Ÿ�� �ö󰡾� �ϹǷ� DPó�� �߰��߰� �����ؾ� Ÿ�Ӿƿ� �ȳ�
//		return parent[a];				// �ֻ��� �θ� ���� ���� �س����Ƿ� �ִ� N�� Ž������ �ڽ�->�θ���(������ �ֻ��� ���) 2������ �ٲ�� ��
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