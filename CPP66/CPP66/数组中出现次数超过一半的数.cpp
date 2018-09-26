#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

class Solution {
protected:
	bool g_bInvalidInput = false;
public:
	bool CheckMoreThanHalf(vector<int> numbers, int num)
	{
		bool res = 0;
		int count = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == num)
			{
				count++;
			}
		}
		if (count>numbers.size() / 2)
		{
			res = 1;
		}
		return res;
	}

	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.size() == 0)
		{
			return g_bInvalidInput;
		}
		int num = 0;
		int times = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			if (times == 0)
			{
				num = numbers[i];
				times = 1;
			}
			else if (num == numbers[i])
			{
				times += 1;
			}
			else
			{
				times -= 1;
			}
		}
		if (!CheckMoreThanHalf(numbers, num))
		{
			return 0;
		}
		return num;
	}
};


int main092621()
{
	Solution sln;
	vector<int> numbers = {1,2,3,2,2,2,5,4,2};
	int res = 0;
	res = sln.MoreThanHalfNum_Solution(numbers);
	cout << res << endl;
	system("pause");
	return 0;
}

