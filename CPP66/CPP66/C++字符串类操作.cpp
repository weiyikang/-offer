#include<iostream>
#include<string>

using namespace std;

//C++字符串类的基本操作

int main131524()
{
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len;

	//复制字符串str1->str3
	str3 = str1;
	cout << str3 << endl;

	//连接str1,str2
	str3 = str1 + str2;
	cout << str3 << endl;

	//求字符串长度
	len = str3.size();
	cout << len << endl;

	//使用>>输入，以空白符作为输入的结束
	string str4;
	cin >> str4;
	cout << "输入的字符串：" << str4 << " " << str4.size() << endl;

	//使用getline函数可控制输入的长度，结束的字符
	string str5;
	getline(cin, str5);
	cout << str5 << endl;

	system("pause");
	return 0;
}




