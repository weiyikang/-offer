#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include<iomanip>
#include<time.h>
#include<string.h>

using namespace std;
#define MAXN 100+10
int a[MAXN];
bool signal[MAXN];

//逆序输出
void invOutput()
{
	int i, x, n = 0;
	while (scanf("%d", &x) == 1)
	{
		a[n++] = x;
	}
	for (i = n - 1; i >= 1; i--)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[0]);
}

//数组复制
void arrayCpy()
{
	int a[MAXN] = { 0 };
	int b[MAXN] = { 1, 2, 3 };
	memcpy(a, b, sizeof(int)*2);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
}

//开灯问题
void light()
{
	int k, n;
	cin >> k;
	cin >> n;
	memset(signal, 0, sizeof(a));
	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((j + 1) % i == 0)
			{
				signal[j] = !signal[j];
			}
		}
	}
	for (int j = 0; j < n; j++)
	{
		if (signal[j] == 1)
		{
			cout << j + 1 << " ";
		}
	}
	cout << endl;
}

void main291752()
{
	//invOutput();
	//arrayCpy();
	light();
	system("pause");
}






