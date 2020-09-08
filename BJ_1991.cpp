//#include <iostream>
//using namespace std;
//
//int N;
//
//struct point
//{
//	char left;
//	char right;
//	char c;
//};
//
//point node[27];
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		char p, l, r;
//		cin >> p >> l >> r;
//		node[p - 'A'].c = p;
//		node[p - 'A'].left = l;
//		node[p - 'A'].right = r;
//	}
//}
//
//void preorder(int p)
//{
//	cout << node[p].c;
//	if(node[p].left != '.') preorder(node[p].left-'A');
//	if(node[p].right != '.') preorder(node[p].right-'A');
//}
//
//void inorder(int p)
//{
//	if (node[p].left != '.') inorder(node[p].left - 'A');
//	cout << node[p].c;
//	if (node[p].right != '.') inorder(node[p].right - 'A');
//}
//
//void postorder(int p)
//{
//	if (node[p].left != '.') postorder(node[p].left - 'A');
//	if (node[p].right != '.') postorder(node[p].right - 'A');
//	cout << node[p].c;
//}
//void solve()
//{
//	preorder(0);
//	cout << "\n";
//	inorder(0);
//	cout << "\n";
//	postorder(0);
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}