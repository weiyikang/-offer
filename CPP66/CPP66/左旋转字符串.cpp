#include<iostream>
#include<string>

using namespace std;

//将字符串的前k位移到末尾
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


////依次将第一位循环至最后一位
////时间复杂度：O(kN)
////空间复杂度：O(1)
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

//将字符串分三段拼接
//str = str1 + str2,
//temp = str1;
//strcpy(str, str2);
//str = str + temp;
//时间复杂度：O(N)
//空间复杂度：O(k)
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
//交换前k个字符串，逆序；
//交换k-n-1的字符串，逆序；
//逆序交换后的整个字符串；
//时间复杂度：O(N);
//空间复杂度：O(1);
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

