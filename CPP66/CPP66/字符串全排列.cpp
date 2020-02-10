//#include<iostream>
//#include<string>
//#include<vector>
//#define MAX 9
//using namespace std;
//
////逐位确定字符
////函数输入：
////所有字符：str
////确定的字符数目：pos
////字符使用状态：used
////已经确定的字符串：output
////需要的字符串长度：len
//void permutation(string str, bool* used, int pos, string output, int len)
//{
//	if (len == pos)
//	{
//		cout << output << endl;
//		return;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		if (!used[i])
//		{
//			used[i] = true;
//			permutation(str, used, pos + 1, output + str[i], len);
//			used[i] = false;
//		}
//	}
//}
//
//
//int main132206()
//{
//	string str;
//	cin >> str;
//	int len = str.size();
//	bool * used = (bool *)malloc(sizeof(bool)*len);
//	memset(used, 0, len);
//	permutation(str, used, 0, "", len);
//
//	system("pause");
//	return 0;
//}
//
