//#include<iostream>
//#include<string>
//#include<vector>
//#define MAX 9
//using namespace std;
//
////��λȷ���ַ�
////�������룺
////�����ַ���str
////ȷ�����ַ���Ŀ��pos
////�ַ�ʹ��״̬��used
////�Ѿ�ȷ�����ַ�����output
////��Ҫ���ַ������ȣ�len
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
