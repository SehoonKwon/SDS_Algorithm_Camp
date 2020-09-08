//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//
////���׸�Ʈ Ʈ��(=�ε����� Ʈ��) �⺻ ����
////���� �����ؾ� �� ��. ������ �� �������� �޶� ���̺귯�� ���� ���� �����ؾ���.
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
////node = ������
//long long int MakeTree(vector<long long int>& tree, int node, int left, int right) //�⺻ �迭�� ������������ �Ű������� �ִ°� ����
//{
//	if (left == right)
//		return tree[node] = Array[left];
//	
//	int mid = (left + right) / 2;
//
//	return tree[node] = MakeTree(tree, node * 2, left, mid) + MakeTree(tree, node * 2 + 1, mid + 1, right); //node*2�� ���� �ڽĳ��
//}
//
//void update(vector<long long int>& tree, int node, int left, int right, int index, long long int d) // d�� �ٲٷ��� ���� ���� ���� ���̰�.
//{																									// tree�� �ٷ� ������ ������ �� ���⿡ �̸� ���ϰ� �������鼭 ����
//	//������ ��� ��
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
//	if (qRight < left || right < qLeft) return 0; //���� ��� ��
//	else if (qLeft <= left && right <= qRight) //������ ������ ���ϸ� ���� ���� ����
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
//	int h = (int)ceil(log2(N)); //ceil�� �ø� �Լ�, ���� �Լ��� floor
//	int tree_size = (1 << (h + 1)); //h+1�� ���� == pow(2, (h+1))
//	vector<long long int> tree(tree_size);
//	MakeTree(tree, 1, 1, N);
//
//	for (int i = 0; i < M + K; i++)
//	{
//		int x;
//		cin >> x;
//
//		if (x == 1) //������Ʈ
//		{
//			int target;
//			long long int val;
//			cin >> target >> val;
//
//			long long int d = val - Array[target];
//			update(tree, 1, 1, N, target, d);
//			Array[target] = val;
//		}
//		else if (x == 2) // ��
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