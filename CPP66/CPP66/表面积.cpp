#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
#define MAXN 100001
#define MAXM 100001

//����ͼ�����
//�������а��۵����
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

	//����������ͼ
	int res = 0;
	
	//����ͼ
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

	//�����ֵ
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

//����ÿ�����ӵı������sum1 = a[i][j]*4+2
//��ȥÿ�������ص����ֵ����, �Ƚ�a[i][j-1], a[i,j+1], a[i-1][j], a[i+1][j]
//sum1 = sum1 -min(a[i][j],a[i][j-1]) - min(a[i][j],a[i][j+1]) - min(a[i][j],a[i-1][j]) - min(a[i][j],a[i+1][j])
//������ά�����ÿһ������
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

	//ѭ������ÿ�����ӵ����
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






