#include<iostream>
#include<vector>
#include<bitset>

using namespace std;

class Solution 
{
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) 
	{
		int len = data.size();
		int *flag = NULL;
		flag = (int *)malloc(sizeof(int)*len);
		memset(flag, 0, sizeof(int)*len);
		*num1 = 1;
		*num2 = 2;
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (i != j && data[i] == data[j])
				{
					flag[i] = 1;
					flag[j] = 1;
				}
			}
		}
		int count = 0;
		int idx[2] = { 0 };
		for (int i = 0; i < len; i++)
		{
			if (flag[i] == 0)
			{
				idx[count] = i;
				count++;
			}
		}
		*num1 = data[idx[0]];
		*num2 = data[idx[1]];

		if (flag != NULL)
		{
			free(flag);
		}
	}
};


int main401859()
{
	Solution sln = Solution();
	int arr[] = { 2, 4, 4, 6, 3, 2, 5, 5 };
	vector<int> vec(arr, arr + 8);

	int num1, num2;
	sln.FindNumsAppearOnce(vec, &num1, &num2);
	cout << "Results:" << num1 << "," << num2 << endl;
	system("pause");
	return 0;
}






