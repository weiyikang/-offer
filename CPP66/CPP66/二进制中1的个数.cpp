#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��

class Solution {
public:
	int  NumberOf1(int n) 
	{
		int count = 0;
		for (int i = 0; i < 32;i++)
		{
			if ((n & 1) == 1)
			{
				count++;
			}
			n = n >> 1;
		}
		return count;
	}
};


void main47()
{
	Solution sln;
	int n[4] = {0, 1, 5, 15};
	for (int i = 0; i < 4; i++)
	{
		cout << sln.NumberOf1(n[i]) << endl;
	}
	system("pause");
}


