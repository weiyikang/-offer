#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//��1 + 2 + 3 + ... + n��
//Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A ? B : C��

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


