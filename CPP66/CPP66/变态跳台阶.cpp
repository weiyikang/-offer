#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//�ݹ���ϰ3����̬��̨��
//һֻ����һ�ο�������1����2����...n��̨�ף������������һ��n����̨���ܹ��ж���������

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


