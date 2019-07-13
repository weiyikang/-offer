//问题描述：
//有n种硬币，面值分别为V1，V2，V3，, , VN每种都有无限多。
//给定非负整数S，可以选用多少个硬币，使得面值之和恰好为S？ 
//输出硬币数目的最小值和最大值

//固定终点的最长路与最短路
//转台转移：d[S] = max{d[S-v[i]]+1, if S>=v[i]}

#include <iostream>
#include <algorithm>

using namespace std;

#define MAXN 3002

//定义d,d(i)表示凑齐i需要的最大硬币数目，或者达到状态i需要的最长路径
int d[MAXN];

//硬币种类n、对应的面值v，需要凑足的面值S
int n;
int v[MAXN];
int S;

//定义-INF
const int inf = 1 << 30;

//记忆化搜索计算路径深度
int dp(int S)
{
	int& ans = d[S];
	if (ans != -1)
	{
		return ans;
	}
	ans = -inf;
	//搜索n种硬币哪一种能够满足补足面值的需要,
	//选择选该分支后，能使当前状态路径长度最长的选择
	for (int i = 0; i < n; i++)
	{
		if (S >= v[i])
		{
			ans = max(ans, dp(S - v[i]) + 1);
		}
	}
	return ans;
}

//输出路径
void print_ans(int S)
{
	for (int i = 0; i < n; i++)
	{
		if (S >= v[i] && d[S] == d[S - v[i]] + 1)
		{
			cout << v[i] << "\t";
			print_ans(S - v[i]);
		}
	}
}


int main2132()
{
	//输入测试用例数目N,要达到的面值S,硬币种类n及对应的面值v
	int N;
	cin >> N;
	while (N--)
	{
		cin >> S;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		memset(d, -1, sizeof(d));
		d[0] = 0;
		cout << dp(S)<<endl;
		cout << "输出组成最长路径的硬币组合：" << endl;
		print_ans(S);
	}


	system("pause");
	return 0;
}

