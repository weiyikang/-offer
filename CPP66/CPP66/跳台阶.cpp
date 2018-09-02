#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//递归练习2：跳台阶
//一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法

class Solution 
{
public:
	int jumpFloor(int number) 
	{
		if (number < 3)
		{
			return number;
		}
		int num1 = 1;
		int num2 = 2;
		int res = 0;
		for (int i = 3; i <= number; i++)
		{
			res = num1 + num2;
			num1 = num2;
			num2 = res;
		}
		return res;
	}
};


void main10()
{
	Solution sln;
	for (int i = 0; i < 4; i++)
	{
		int res = sln.jumpFloor(i);
		cout << res << endl;
	}
	system("pause");
}


