#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//��λȷ���ַ�
//�������룺
//�����ַ���str
//ȷ�����ַ���Ŀ��pos
//�ַ�ʹ��״̬��used
//�Ѿ�ȷ�����ַ�����output
//��Ҫ���ַ������ȣ�len
void permutation(string str, bool* used, int pos, string output, int len)
{
	if (len == pos)
	{
		cout << output << endl;
		return;
	}
	bool repet = false;
	for (int i = 0; i < len; i++)
	{
		////�жϵ�ǰ��Ҫʹ�õ��ַ��Ƿ���ǰ����ʹ�ù�
		//for (int k = 0; k < i; k++)
		//{
		//	if (str[i] == str[k] && used[k])
		//	{
		//		repet = true;
		//	}
		//}
		
		if (!used[i])
		{
			used[i] = true;
			permutation(str, used, pos + 1, output + str[i], len);
			used[i] = false;
		}
	}
}


int main150843()
{
	string str;
	cin >> str;
	int len = str.size();
	bool * used = (bool *)malloc(sizeof(bool)*len);
	memset(used, 0, len);
	permutation(str, used, 0, "", len);

	system("pause");
	return 0;
}


