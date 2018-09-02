#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//求1 + 2 + 3 + ... + n，
//要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A ? B : C）

class Solution {
public:
	int Sum_Solution(int n) 
	{
		int ans = n;
		ans && (ans += Sum_Solution(n - 1));
		return ans;
	}
};


void main46()
{
	Solution sln;
	for (int i = 0; i < 5;i++)
	{
		cout << sln.Sum_Solution(i) << endl;
	}
	system("pause");
}


