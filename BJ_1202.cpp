//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N, K;
//int Array[300001];
//
//struct point
//{
//	int m;
//	int val;
//};
//
//bool cmp(const point& u, const point& v)
//{
//	if (u.m < v.m) return true;
//	else return false;
//}
//
//priority_queue<int> pq;
//vector<point> v;
//
//void input()
//{
//	cin >> N >> K;
//	for (int i = 0; i < N; i++)
//	{
//		int m, val;
//		cin >> m >> val;
//		v.push_back({ m, val });
//	}
//
//	for (int i = 0; i < K; i++)
//		cin >> Array[i];
//}
//
//void solve()
//{
//	sort(Array, Array + K);
//	sort(v.begin(), v.end(), cmp);
//
//	long long int sum = 0;
//	int j = 0;
//	for (int i = 0; i < K; i++)
//	{
//		for (; j < v.size(); j++) //temp ������ �ε��� �����ϴ� ������� �ߴµ� �̷��� ���濡 ��� ���� �� ���� ��� j�� �ʱ�ȭ �ȵǼ� �ߺ��߻�
//		{
//			if (v[j].m > Array[i])
//				break;
//			else
//				pq.push(v[j].val);
//		}
//
//		if (pq.empty()) continue;
//		sum += pq.top();
//		pq.pop();
//	}
//
//	cout << sum;
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