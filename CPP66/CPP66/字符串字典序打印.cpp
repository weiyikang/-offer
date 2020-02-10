#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//逐位确定字符
//函数输入：
//所有字符：str
//确定的字符数目：pos
//字符使用状态：used
//已经确定的字符串：output
//需要的字符串长度：len
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
		////判断当前需要使用的字符是否在前几次使用过
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


