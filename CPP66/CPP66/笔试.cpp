#include<iostream>
#include<algorithm>

#define INF 100000

using namespace std;


//int main()
//{
//	int n;
//	cin >> n;
//	int *a = (int *)malloc(sizeof(int)*n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//
//	int *res = (int *)malloc(sizeof(int)*n);
//
//	int *pre = new int[n];
//	int *next = new int[n];
//	
//
//	pre[0] = 1;
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] >= a[i - 1])
//		{
//			pre[i] = pre[i - 1] + 1;
//		}
//		else
//		{
//			pre[i] = 2;
//		}
//	}
//
//	next[n - 1] = 1;
//	for (int i = n-2; i >=0; i--)
//	{
//		if (a[i] >= a[i + 1])
//		{
//			next[i] = next[i + 1] + 1;
//		}
//		else
//		{
//			next[i] = 2;
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout << pre[i]+next[i]-1 << " ";
//	}
//
//	system("pause");
//	return 0;
//}


int score(int **a, int n, int m)
{

	if (n < 0)
	{
		return 0;
	}

	if (m<0 || m>2)
	{
		return -INF;
	}

	int res = 0;

	int *s = new int[3];
	for (int i = 0; i < 3; i++)
	{
		if (a[n][m] == 0)
		{
			s[i] = -score(a, n - 1, m + i - 1);
		}
		else
		{
			s[i] = a[n][m] + score(a, n - 1, m + i - 1);
		}
	}
	
	res = s[0];
	for (int i = 0; i < 3; i++)
	{
		if (s[i]>res)
		{
			res = s[i];
		}
	}
	
	return res;
}


int main181335()
{
	int n;
	cin >> n;
	int **a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}

	int *res = new int[3];
	for (int i = 0; i < 3; i++)
	{
		res[i] = score(a, n - 1, i);
	}

	int result = res[0];
	for (int i = 0; i < 3; i++)
	{
		if (res[i]>result)
		{
			result = res[i];
		}
	}

	cout << result << endl;
	
	system("pause");
	return 0;
}


