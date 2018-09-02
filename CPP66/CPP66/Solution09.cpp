#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//µÝ¹éÁ·Ï°1£ºì³²¨ÄÇÆõÊýÁÐ

class Solution {
public:
	int Fibonacci(int n) 
	{
		if (n == 0)
		{
			return 0;
		}
		if (n == 1)
		{
			return 1;
		}
		else
		{
			return Fibonacci(n - 1) + Fibonacci(n - 2);
		}
	}
};


void main()
{
	Solution sln;
	int idx[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < 10; i++)
	{
		int res = sln.Fibonacci(i);
		cout << res << endl;
	}
	
	system("pause");
}


