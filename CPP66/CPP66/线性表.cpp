#include<iostream>
#include<algorithm>
#define MAX 1000

using namespace std;


//求1-1000中出现次数最多的数字
int search(int *a, int n)
{
	int *res = new int[MAX];
	for (int i = 0; i < n; i++)
	{
		res[a[i]]++;
	}

	//选择排序，有序的最后一个元素与其他元素比较
	int idx = 0;
	int max = res[idx];
	for (int i = 0; i < MAX; i++)
	{
		if (max < res[i])
		{
			max = res[i];
			idx = i;
		}
	}

	return idx;
}


int main200950()
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int res = search(a, n);

	cout << res << endl;

	system("pause");
	return 0;
}


