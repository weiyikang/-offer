#include<iostream>
#include<string>

using namespace std;

//�ַ�����ʼ��
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

//�ַ�������
void forea()
{
	string s1 = "abcdefg";
	//1. ���鷽ʽ
	for (int i = 0; i < s1.length(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;
	//2. ������
	for (string::iterator it = s1.begin(); it < s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//3. at���ʣ����׳��쳣�����򲻻��ж�
	try
	{
		for (int i = 0; i < s1.length()+3; i++)
		{
			cout << s1.at(i) << " ";
		}
	}
	catch (...)
	{
		cout << "�쳣" << endl;
	}

	cout << endl;
}

//�ַ�ָ����string���ת��
void chan()
{
	string s1 = "aaabbb";
	//��s1תΪ�ַ�ָ��
	const char *p = s1.c_str();

	//��s1�����ݿ�����buff��
	char buff[128];
	//������3���ַ�������'\0';
	/*s1.copy(buff, 3, 0);
	cout << buff << endl;*/
}

//�ַ����������滻
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


