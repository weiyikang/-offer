#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//�ݹ���ϰ2����̨��
//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж���������

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


