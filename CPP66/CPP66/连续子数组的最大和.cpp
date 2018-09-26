#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;


class Solution {
protected:
	bool g_InvalidInput = false;
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		if (array.empty())
		{
			return g_InvalidInput;
		}
		int sum = INT_MIN;
		int curSum = 0;
		for (int i = 0; i < array.size(); i++)
		{
			if (curSum <= 0)
			{
				curSum = array[i];
			}
			else
			{
				curSum += array[i];
			}
			if (curSum > sum)
			{
				sum = curSum;
			}
		}
		return sum;
	}
};


void main092620()
{
	Solution sln;
	vector<int> array = { 6, -3, -2, 7, -15, 1, 2, 2 };
	int res = 0;
	res = sln.FindGreatestSumOfSubArray(array);
	cout << res << endl;
	system("pause");
}
