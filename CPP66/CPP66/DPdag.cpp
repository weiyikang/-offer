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
////保存图的邻接矩阵
//int G[MAXN][MAXN];
////保存到达结点的最长路径
//int d[MAXN];
//
//struct node
//{
//	//    边长
//	int x, y;
//};
//struct node nodes[MAXN];
//
////计算i节点的深度
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
////打印最长路径上的节点
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
//		//使用邻接矩阵保存图
//		for (int i = 0; i<n; i++)
//		{
//			for (int j = 0; j<n; j++)
//			{
//				if ((nodes[i].x>nodes[j].x && nodes[i].y>nodes[j].y) ||
//					(nodes[i].x>nodes[j].y && nodes[i].y>nodes[j].x))
//				{
//					//如果j矩形可以嵌套在i矩形里面（即j矩形小于i矩形），则 j->i
//					G[i][j] = 1;
//				}
//			}
//		}
//		//将定义的d空间赋值为0，d[i]代表第i个节点的最长路径
//		memset(d, 0, sizeof(d));
//		for (int i = 0; i<n; i++)
//		{
//			dp(i);
//		}
//		//打印出邻接矩阵的值
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << "\t" << G[i][j];
//			}
//			cout << endl;
//		}
//		//打印d数组的值
//		cout << "d:" << endl;
//		for (int i = 0; i < n; i++)
//		{
//			cout << "\t" << d[i];
//		}
//
//		//计算所有节点中的最长路径，未输出最长路径对应的节点组合
//		cout << "最长路径：" << *max_element(d, d + MAXN) << endl;
//		
//		//输出最长路径
//		int idx = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (d[i]>d[idx])
//			{
//				idx = i;
//			}
//		}
//		cout << "最长路径节点：" << endl;
//		print_ans(idx);
//	}
//	system("pause");
//	return 0;
//}
//
//
//
