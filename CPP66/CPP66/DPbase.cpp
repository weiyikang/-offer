#include <iostream>
using namespace std;

#define N 4

int dist(int i, int j);
int max(int x, int y);
int dist2(int i, int j);

//����·����������
int d[N][N] = { 0 };
//����������
int a[N][N] = { 1, 0, 0, 0,
3, 2, 0, 0,
4, 10, 1, 0,
4, 3, 2, 20 };

int main2155()
{
	//�ݹ鷽ʽ����
	//cout << dist(0, 0);

	////���¶��ϼ��㣬�����ظ�����
	//for (int i = 0; i <N; i++)
	//{
	//	d[N - 1][i] = a[N - 1][i];
	//}
	//for (int i = N - 2; i >= 0; i--)
	//{
	//	for (int j = 0; j <= i; j++)
	//	{
	//		d[i][j] = a[i][j] + max(d[i + 1][j], d[i + 1][j + 1]);
	//	}
	//}
	//cout << d[0][0] << endl;

	//�ݹ���ظ�����
	cout << dist2(0, 0) << endl;

	system("pause");
	return 0;
}

//�ݹ�����·��
int dist(int i, int j)
{
	if (i == N-1 || j == N-1)
	{
		return a[i][j];
	}
	return a[i][j] + max(dist(i + 1, j), dist(i + 1, j + 1));
}

int max(int x, int y)
{
	return x > y ? x : y;
}

//����ݹ��е��ظ�����
int dist2(int i, int j)
{
	if (d[i][j]>0)
	{
		return d[i][j];
	}
	if (i == N - 1 || j == N - 1)
	{
		return a[i][j];
	}
	return d[i][j] = a[i][j] + max(dist(i + 1, j), dist(i + 1, j + 1));
}



