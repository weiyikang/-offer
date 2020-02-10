#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
#define MAXN 100001
#define MAXM 100001

//三视图求表面
//忽略了有凹槽的情况
int main152059()
{
	int N, M;
	cin >> N;
	cin >> M;
	//int **a;
	/*a = new int*[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = new int[M];
	}*/

	vector< vector<int> > a(N,vector<int>(M,0));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> a[i][j];
		}
	}

	//排序求三视图
	int res = 0;
	
	//俯视图
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (a[i][j]>0)
			{
				sum += 1;
			}
		}
	}

	res += 2 * sum;

	//行最大值
	int rowsum = 0;
	for (int i = 0; i < N; i++)
	{
		int maxv = a[i][0];
		for (int j = 0; j < M; j++)
		{
			if (maxv < a[i][j])
			{
				maxv = a[i][j];
			}
		}
		rowsum += maxv;
	}
	res += 2 * rowsum;

	int colsum = 0;
	for (int j = 0; j < M; j++)
	{
		int maxv = a[0][j];
		for (int i = 0; i < N; i++)
		{
			if (maxv < a[i][j])
			{
				maxv = a[i][j];
			}
		}
		colsum += maxv;
	}

	res += 2 * colsum;
	cout << res << endl;

	system("pause");
	return 0;
}

//计算每个柱子的表面积，sum1 = a[i][j]*4+2
//减去每个柱子重叠部分的面积, 比较a[i][j-1], a[i,j+1], a[i-1][j], a[i+1][j]
//sum1 = sum1 -min(a[i][j],a[i][j-1]) - min(a[i][j],a[i][j+1]) - min(a[i][j],a[i-1][j]) - min(a[i][j],a[i+1][j])
//遍历二维数组的每一个格子
int main160910()
{
	int N, M;
	cin >> N;
	cin >> M;
	int **a = new int*[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = new int[M];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> a[i][j];
		}
	}

	//循环计算每个柱子的面积
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			sum += a[i][j] * 4 + 2;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M-1; j++)
		{
			sum -= min(a[i][j], a[i][j + 1]) * 2;
		}
	}

	for (int j = 0; j < M; j++)
	{
		for (int i = 0; i < N - 1; i++)
		{
			sum -= min(a[i][j], a[i + 1][j]) * 2;
		}
	}

	cout << sum << endl;

	system("pause");
	return 0;
}






