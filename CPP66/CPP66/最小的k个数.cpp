#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//����n���������ҳ�������С��K������
//��������4, 5, 1, 6, 2, 7, 3, 8��8�����֣�
//����С��4��������1, 2, 3, 4, ��

class Solution 
{
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
	{
		vector<int> res;
		if (input.empty() || k > input.size())
		{
			return res;
		}
		for (int i = 0; i < k; i++)
		{
			for (int j = input.size()-1; j > i; j--)
			{
				if (input[j] < input[j-1])
				{
					int temp = input[j];
					input[j] = input[j - 1];
					input[j - 1] = temp;
				}
			}
			res.push_back(input[i]);
		}
		return res;
	}
};


void main092618()
{
	Solution sln;
	vector<int> data = { 4, 5, 3, 1, 2 };
	int k = 3;
	vector<int> res;
	res = sln.GetLeastNumbers_Solution(data, k);
	for (int i = 0; i < k; i++)
	{
		cout << res[i] << endl;
	}
	system("pause");
}


