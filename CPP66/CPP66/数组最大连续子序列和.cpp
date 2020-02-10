#include<iostream>
#include<algorithm>

using namespace std;

bool g_InvalidInput = false;

int greatest(int *data, int len)
{
	if (data == NULL || len <= 0)
	{
		g_InvalidInput = true;
		return g_InvalidInput;
	}
	//最大子序列和
	int greatest = 0x80000000;
	int curSum = 0;
	for (int i = 0; i < len; i++)
	{
		if (curSum <= 0)
		{
			curSum = data[i];
		}
		else
		{
			curSum += data[i];
		}

		if (curSum > greatest)
		{
			greatest = curSum;
		}
	}
}

int main222250()
{
	int n;
	cin >> n;
	int *data = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> data[i];
	}

	int res = greatest(data, n);

	cout << res << endl;

	system("pause");
	return 0;
}

