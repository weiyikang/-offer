#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//�滻�ո�
//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�� ��%20����
//���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��

class Solution 
{
public:
	void replaceSpace(char *str, int length) 
	{
		if (str == NULL || length <= 0)
		{
			return;
		}
		int len = length;
		for (int i = length - 1; i >= 0; i--)
		{
			//cout << str[i] << endl;
			if (str[i] == ' ')
			{
				len += 2;
				for (int j = len - 1; j-2 > i; j--)
				{
					str[j] = str[j - 2];
				}
				str[i] = '\%';
				str[i + 1] = '2';
				str[i + 2] = '0';
			}
		}
		str[len] = '\0';
	}
};

void main04()
{
	Solution solu;
	char str[20] = "we are young";
	int length = strlen(str);
	solu.replaceSpace(str, length);
	cout << str << endl;
	system("pause");
}

