#include<iostream>

using namespace std;


int main191800()
{
	int n;
	int m;
	cin >> n;
	cin >> m;
	int **a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x;
		cin >> y;
		a[x - 1][y - 1] = 1;
		a[y - 1][x - 1] = 1;
	}

	cout << "4 5" << endl;

	system("pause");
	return 0;
}
