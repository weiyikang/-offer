#include<iostream>
#include<algorithm>

using namespace std;

int dec(int *a, int len)
{
	if (len <= 1)
	{
		return len;
	}
	int *dp = new int[len];
	for (int i = 0; i < len; i++)
	{
		dp[i] = 1;
	}
	for (int i = 1; i < len; i++)
	{
		int great = dp[i];
		for (int j = 0; j < i; j++)
		{
			if (a[i] <= a[j])
			{
				if (dp[j] + 1>great)
				{
					great = dp[j] + 1;
				}
			}
		}
		dp[i] = great;
	}
	return dp[len-1];
}

int inc(int *a, int len)
{
	if (len <= 1)
	{
		return len;
	}
	int *dp = new int[len];
	for (int i = 0; i < len; i++)
	{
		dp[i] = 1;
	}
	for (int i = 1; i < len; i++)
	{
		int great = dp[i];
		for (int j = 0; j < i; j++)
		{
			if (a[i] >= a[j])
			{
				if (dp[j] + 1>great)
				{
					great = dp[j] + 1;
				}
			}
		}
		dp[i] = great;
	}
	return dp[len-1];
}


int main301605()
{
	int n;
	cin >> n;
	int *a = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int great = 1;
	for (int i = 0; i < n; i++)
	{
		int count = inc(a, i + 1) + dec(a + i, n - i-1);
		if (great < count)
		{
			great = count;
		}
	}

	cout << great << endl;

	system("pause");
	return 0;
}


