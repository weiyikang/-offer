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
	//ð������
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
	{
		vector<int> res;
		if (input.empty() || k > input.size())
		{
			return res;
		}
		//ð��k�����ڱȽϵó�����k����
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

	//ѡ������
	vector<int> GetLeastNumbers_Solution2(vector<int> input, int k)
	{
		vector<int> res;
		if (input.empty() || k > input.size())
		{
			return res;
		}
		//k������Ƚϵ�����k����
		for (int i = 0; i < k; i++)
		{
			for (int j = i; j < input.size(); j++)
			{
				if (input[i] < input[j])
				{
					int temp = input[j];
					input[j] = input[i];
					input[i] = temp;
				}
			}
			res.push_back(input[i]);
		}
		return res;
	}

	//��������
	vector<int> GetLeastNumbers_Solution3(vector<int> input, int k)
	{
		vector<int> res;
		if (input.empty() || k > input.size())
		{
			return res;
		}
		//���ŵõ��ź��������
		qSort(input, input.size());
		for (int i = 0; i < k; i++)
		{
			res.push_back(input[i]);
		}
		return res;
	}

	void qSort(vector<int> &array, int len)
	{
		quickSort(array, 0, len-1);
	}

	void quickSort(vector<int> &array, int low, int high)
	{
		if (low < high)
		{
			int piv = partition(array, low, high);
			quickSort(array, low, piv - 1);
			quickSort(array, piv + 1, high);
		}
	}

	int partition(vector<int> &array, int low, int high)
	{
		int pivot = array[low];
		while (low<high)
		{
			while ((low < high) && (array[high] >= pivot))
			{
				high--;
			}
			swap(array[low], array[high]);
			while ((low<high)&&(array[low]<=pivot))
			{
				low++;
			}
			swap(array[low], array[high]);
		}
		return low;
	}
};


void main161055()
{
	Solution sln;
	vector<int> data = { 4, 5, 3, 1, 2 };
	int k = 3;
	vector<int> res;
	res = sln.GetLeastNumbers_Solution3(data, k);
	for (int i = 0; i < k; i++)
	{
		cout << res[i] << endl;
	}
	system("pause");
}


