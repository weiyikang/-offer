#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//递归练习3：变态跳台阶
//一只青蛙一次可以跳上1级、2级、...n级台阶，求该青蛙跳上一个n级的台阶总共有多少种跳法

class Solution {
public:
	int jumpFloorII(int number) 
	{
		if (number <= 2)
		{
			return number;
		}
		int res = 1;
		for (int i = 0; i < number - 1; i++)
		{
			res = res * 2;
		}
		return res;
	}
};


void main11()
{
	Solution sln;
	for (int i = 0; i < 4; i++)
	{
		int res = sln.jumpFloorII(i);
		cout << res << endl;
	}
	system("pause");
}


