#include <iostream>
#include <vector>

using namespace std;

//��ά�����еĲ���
//��һ����ά�����У�ÿ��һά����ĳ�����ͬ����
//ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳������
//�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������


class Solution {
public:
	bool Find(int target, vector<vector<int> > array) 
	{
		bool res = false;
		int row = array.size();
		int col = array[0].size();
		int i = 0;
		int j = col - 1;
		while (i < row && j >= 0)
		{
			if (array[i][j] == target)
			{
				return true;
			}
			else if (array[i][j] > target) 
			{
				j--;
			}
			else
			{
				i++;
			}
		}
		return res;
	}
};

int main03()
{
	int a1[] = { 1, 2, 8, 9 };
	int a2[] = { 2, 4, 9, 12 };
	int a3[] = { 4, 7, 10, 13 };
	int a4[] = { 6, 8, 11, 15 };
	vector<vector<int>> array;
	array.push_back(vector<int>(a1, a1 + 4));
	array.push_back(vector<int>(a2, a2 + 4));
	array.push_back(vector<int>(a3, a3 + 4));
	array.push_back(vector<int>(a4, a4 + 4));

	Solution solu;
	cout << solu.Find(5, array) << endl;
	system("pause");
	return 0;
}
