//#define _CRT_SECURE_NO_WARNINGS
////#define LOCAL
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cstdio>
////#include <stdio.h>
//#include <cstdlib>
//#include<time.h>
//#include <ctype.h>
//#include <sstream>
//#include <assert.h>
//#include <math.h>
//#include <algorithm>
//#include <vector>
//#include <set>
//#include <map>
//#include <stack>
//#include <queue>
//#define MAXN 1002
//
//
//using namespace std;
//
//int n;
////����ͼ���ڽӾ���
//int G[MAXN][MAXN];
////���浽������·��
//int d[MAXN];
//
//struct node
//{
//	//    �߳�
//	int x, y;
//};
//struct node nodes[MAXN];
//
////����i�ڵ�����
//int dp(int i)
//{
//	int& ans = d[i];
//	if (ans > 0)
//		return ans;
//	ans = 1;
//	for (int j = 0; j<n; j++)
//	{
//		if (G[i][j])
//			ans = max(ans, dp(j) + 1);
//	}
//	return ans;
//}
//
////��ӡ�·���ϵĽڵ�
//void print_ans(int i)
//{
//	cout << "\t" << i;
//	for (int j = 0; j < n; j++)
//	{
//		if (G[i][j] == 1 && d[i] == d[j] + 1)
//		{
//			print_ans(j);
//			break;
//		}
//	}
//}
//
//
//int main1648()
//{
//#ifdef LOCAL
//	freopen("data.in", "r", stdin);
//	freopen("data.out", "w", stdout);
//#endif // LOCAL
//	int N;
//	cin >> N;
//	while (N--)
//	{
//		memset(G, 0, sizeof(G));
//		cin >> n;
//		for (int i = 0; i<n; i++)
//		{
//			cin >> nodes[i].x;
//			cin >> nodes[i].y;
//		}
//		//ʹ���ڽӾ��󱣴�ͼ
//		for (int i = 0; i<n; i++)
//		{
//			for (int j = 0; j<n; j++)
//			{
//				if ((nodes[i].x>nodes[j].x && nodes[i].y>nodes[j].y) ||
//					(nodes[i].x>nodes[j].y && nodes[i].y>nodes[j].x))
//				{
//					//���j���ο���Ƕ����i�������棨��j����С��i���Σ����� j->i
//					G[i][j] = 1;
//				}
//			}
//		}
//		//�������d�ռ丳ֵΪ0��d[i]�����i���ڵ���·��
//		memset(d, 0, sizeof(d));
//		for (int i = 0; i<n; i++)
//		{
//			dp(i);
//		}
//		//��ӡ���ڽӾ����ֵ
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << "\t" << G[i][j];
//			}
//			cout << endl;
//		}
//		//��ӡd�����ֵ
//		cout << "d:" << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << "\t" << d[i];
//		}
//
//		//�������нڵ��е��·����δ����·����Ӧ�Ľڵ����
//		cout << "�·����" << *max_element(d, d + MAXN) << endl;
//		
//		//����·��
//		int idx = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (d[i]>d[idx])
//			{
//				idx = i;
//			}
//		}
//		cout << "�·���ڵ㣺" << endl;
//		print_ans(idx);
//	}
//	system("pause");
//	return 0;
//}
//
//
//
