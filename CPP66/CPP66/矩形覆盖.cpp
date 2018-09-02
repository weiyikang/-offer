#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//递归练习4：举行覆盖
//我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。
//请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？

class Solution 
{
public:
	int rectCover(int number) 
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


void main12()
{
	Solution sln;
	for (int i = 0; i < 5; i++)
	{
		cout << sln.rectCover(i) << endl;
	}
	system("pause");
}


