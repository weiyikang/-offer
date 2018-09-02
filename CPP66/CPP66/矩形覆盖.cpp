#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//�ݹ���ϰ4�����и���
//���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
//������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����

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


