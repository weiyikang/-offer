#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

//5 6 7 1 2 8
//5 6 7 8

int main301539()
{
	int n;
	cin >> n;
	int *a = new int[n];
	int *dp = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		dp[i] = 1;
	}
	for (int i = 1; i < n; i++)
	{
		int great = dp[i];
		for (int j = 0; j < i; j++)
		{
			if (a[i]>=a[j])
			{
				if (dp[j] + 1>great)
				{
					great = dp[j] + 1;
				}
			}
		}
		dp[i] = great;
	}
	cout << dp[n - 1] << endl;
	system("pause");
	return 0;
}


