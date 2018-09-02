#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//�ݹ���ϰ1��쳲���������

//�ݹ��
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


//������
class Solution2 {
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
		int num1 = 0;
		int num2 = 1;
		int res = 0;
		for (int i = 2; i <= n; i++)
		{
			res = num1 + num2;
			num1 = num2;
			num2 = res;
		}
		return res;
	}
};


void main09()
{
	Solution2 sln;
	for (int i = 0; i < 10; i++)
	{
		int res = sln.Fibonacci(i);
		cout << res << endl;
	}
	
	system("pause");
}


