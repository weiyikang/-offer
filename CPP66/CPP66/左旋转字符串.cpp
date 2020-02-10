#include<iostream>
#include<string>

using namespace std;

//���ַ�����ǰkλ�Ƶ�ĩβ
//
//int main()
//{
//	string str;
//	int k;
//	getline(cin, str);
//	cin >> k;
//	
//	int len = str.size();
//	for (int i = 0; i < k; i++)
//	{
//		int temp = str[0];
//		for (int j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[len - 1] = temp;
//	}
//	cout << str << endl;
//
//	system("pause");
//	return 0;
//}


////���ν���һλѭ�������һλ
////ʱ�临�Ӷȣ�O(kN)
////�ռ临�Ӷȣ�O(1)
//class Solution {
//public:
//	string LeftRotateString(string str, int n) {
//		int len = str.size();
//		for (int i = 0; i < n; i++)
//		{
//			int temp = str[0];
//			for (int j = 0; j < len - 1; j++)
//			{
//				str[j] = str[j + 1];
//			}
//			str[len - 1] = temp;
//		}
//		return str;
//	}
//};

//���ַ���������ƴ��
//str = str1 + str2,
//temp = str1;
//strcpy(str, str2);
//str = str + temp;
//ʱ�临�Ӷȣ�O(N)
//�ռ临�Ӷȣ�O(k)
//class Solution {
//public:
//	string LeftRotateString(string str, int n) {
//		int len = str.size();
//		string temp;
//		temp = str.substr(0, n);
//		str.erase(0, n);
//		str = str + temp;
//		return str;
//	}
//};


//(X'Y')' = YX
//����ǰk���ַ���������
//����k-n-1���ַ���������
//���򽻻���������ַ�����
//ʱ�临�Ӷȣ�O(N);
//�ռ临�Ӷȣ�O(1);
class Solution {
public:
	string LeftRotateString(string str, int n) {
		int len = str.size();
		if (len == 0 || n == 0)
		{
			return str;
		}
		reverse(str, 0, n - 1);
		reverse(str, n, len - 1);
		reverse(str, 0, len - 1);

		return str;
	}

	void reverse(string &str, int begin, int end)
	{
		while (begin < end)
		{
			char temp = str[begin];
			str[begin] = str[end];
			str[end] = temp;
			begin++;
			end--;
		}
	}
};


int main131941()
{
	Solution sln;
	string str;
	int n;
	getline(cin, str);
	cin >> n;
	cout << sln.LeftRotateString(str, n) << endl;

	system("pause");
	return 0;
}

