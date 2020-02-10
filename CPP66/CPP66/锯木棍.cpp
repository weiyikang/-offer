#include<iostream>

using namespace std;


int find(int* a, int low, int high, int m)
{
	if ((low==high)&&(a[low]!=m))
	{
		return -1;
	}
	int piv = (low + high) / 2;
	if (a[piv] == m)
	{
		return piv;
	}
	else if (a[piv]>m)
	{
		find(a, low, piv - 1, m);
	}
	else
	{
		find(a, piv + 1, high, m);
	}
}

int main171958()
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int m;
	cin >> m;

	int res = find(a, 0, n - 1, m);
	cout << res << endl;

	system("pause");
	return 0;
}
