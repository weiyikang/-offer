#include<iostream>
#include<string>

using namespace std;

//字符串初始化
void init1()
{
	string s1 = "aaaa";
	string s2("bbbb");
	string s3 = s2;
	string s4(10, 'a');

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
}

//字符串遍历
void forea()
{
	string s1 = "abcdefg";
	//1. 数组方式
	for (int i = 0; i < s1.length(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;
	//2. 迭代器
	for (string::iterator it = s1.begin(); it < s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//3. at访问，可抛出异常，程序不会中断
	try
	{
		for (int i = 0; i < s1.length()+3; i++)
		{
			cout << s1.at(i) << " ";
		}
	}
	catch (...)
	{
		cout << "异常" << endl;
	}

	cout << endl;
}

//字符指针与string类的转换
void chan()
{
	string s1 = "aaabbb";
	//把s1转为字符指针
	const char *p = s1.c_str();

	//把s1的内容拷贝到buff中
	char buff[128];
	//仅拷贝3个字符，不加'\0';
	/*s1.copy(buff, 3, 0);
	cout << buff << endl;*/
}

//字符串查找与替换
void fin()
{
	string s = "weiyikang hello! weiyikang nihao weiyikang OK!";
	int idx = s.find("weiyikang", 0);
	cout << idx << endl;
}

int main292046()
{
	//init1();
	//forea();
	//chan();
	fin();

	system("pause");
	return 0;
}


