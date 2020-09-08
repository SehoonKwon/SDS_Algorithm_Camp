//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N, K;
//int Array[101];
//
//struct point
//{
//	int idx;
//	int val;
//	int cnt;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> N >> K;
//}
//
//bool cmp(const point& u, const point& v)
//{
//	if (u.cnt < v.cnt) return true;
//	else if (u.cnt == v.cnt)
//	{
//		if (u.idx < v.idx) return true;
//		else return false;
//	}
//	else return false;
//}
//
//bool cmp2(const point& u, const point& v)
//{
//	if (u.val < v.val) return true;
//	else return false;
//}
//
//void solve()
//{
//	int X, idx = 1;
//	for (int i = 0; i < K; i++)
//	{
//		cin >> X;
//		if (Array[X] == false)
//		{
//			Array[X] = true;
//			if (v.size() < N)
//			{
//				v.push_back({ idx, X, 1 });
//				idx++;
//			}
//			else
//			{
//				sort(v.begin(), v.end(), cmp);
//				Array[v[0].val] = false;
//				for (int j = 1; j < N; j++)
//					v[j].idx--;
//
//				v[0].idx = N;
//				v[0].cnt = 1;
//				v[0].val = X;
//			}
//		}
//		else
//		{
//			for (int i = 0; i < N; i++)
//			{
//				if (v[i].val == X)
//				{
//					v[i].cnt++;
//					break;
//				}
//			}
//		}
//	}
//
//	sort(v.begin(), v.end(), cmp2);
//	for (int i = 0; i < N; i++)
//	{
//		cout << v[i].val;
//		if (i != N - 1) cout << " ";
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