//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//
////세그먼트 트리(=인덱스드 트리) 기본 문제
////연습 많이해야 될 듯. 쿼리가 매 문제마다 달라서 라이브러리 없음 직접 구현해야함.
//
//int N, M, K;
//long long int Array[1000001];
//
//void input()
//{
//	cin >> N >> M >> K;
//	for (int i = 1; i < N + 1; i++)
//		cin >> Array[i];
//}
//
////node = 시작점
//long long int MakeTree(vector<long long int>& tree, int node, int left, int right) //기본 배열도 전역변수보다 매개변수로 넣는게 안전
//{
//	if (left == right)
//		return tree[node] = Array[left];
//	
//	int mid = (left + right) / 2;
//
//	return tree[node] = MakeTree(tree, node * 2, left, mid) + MakeTree(tree, node * 2 + 1, mid + 1, right); //node*2는 왼쪽 자식노드
//}
//
//void update(vector<long long int>& tree, int node, int left, int right, int index, long long int d) // d는 바꾸려는 값과 원래 값의 차이값.
//{																									// tree는 바로 리프에 접근할 수 없기에 미리 구하고 내려오면서 갱신
//	//범위에 벗어난 곳
//	if (index < left || right < index) return;
//	else
//	{
//		tree[node] += d;
//		if (left != right)
//		{
//			int mid = (left + right) / 2;
//			update(tree, node * 2, left, mid, index, d);
//			update(tree, node * 2 + 1, mid + 1, right, index, d);
//		}
//	}
//}
//
//long long int query(vector<long long int>& tree, int node, int left, int right, int qLeft, int qRight)
//{
//	if (qRight < left || right < qLeft) return 0; //범위 벗어난 곳
//	else if (qLeft <= left && right <= qRight) //범위에 완전히 속하면 구간 정보 리턴
//		return tree[node];
//	else
//	{
//		int mid = (left + right) / 2;
//		return query(tree, node * 2, left, mid, qLeft, qRight) + query(tree, node * 2 + 1, mid + 1, right, qLeft, qRight);
//	}
//}
//
//void solve()
//{
//	int h = (int)ceil(log2(N)); //ceil은 올림 함수, 내림 함수는 floor
//	int tree_size = (1 << (h + 1)); //h+1의 제곱 == pow(2, (h+1))
//	vector<long long int> tree(tree_size);
//	MakeTree(tree, 1, 1, N);
//
//	for (int i = 0; i < M + K; i++)
//	{
//		int x;
//		cin >> x;
//
//		if (x == 1) //업데이트
//		{
//			int target;
//			long long int val;
//			cin >> target >> val;
//
//			long long int d = val - Array[target];
//			update(tree, 1, 1, N, target, d);
//			Array[target] = val;
//		}
//		else if (x == 2) // 합
//		{
//			int left, right;
//			cin >> left >> right;
//			long long ans = query(tree, 1, 1, N, left, right);
//			cout << ans << "\n";
//		}
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	input();
//	solve();
//	return 0;
//}