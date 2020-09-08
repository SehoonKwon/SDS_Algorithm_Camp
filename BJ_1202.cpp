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
//		for (; j < v.size(); j++) //temp 변수로 인덱스 저장하는 방식으로 했는데 이러면 가방에 모두 넣을 수 있을 경우 j가 초기화 안되서 중복발생
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