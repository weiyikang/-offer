#include<iostream>
#include<string>

using namespace std;

//C++�ַ�����Ļ�������

int main131524()
{
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len;

	//�����ַ���str1->str3
	str3 = str1;
	cout << str3 << endl;

	//����str1,str2
	str3 = str1 + str2;
	cout << str3 << endl;

	//���ַ�������
	len = str3.size();
	cout << len << endl;

	//ʹ��>>���룬�Կհ׷���Ϊ����Ľ���
	string str4;
	cin >> str4;
	cout << "������ַ�����" << str4 << " " << str4.size() << endl;

	//ʹ��getline�����ɿ�������ĳ��ȣ��������ַ�
	string str5;
	getline(cin, str5);
	cout << str5 << endl;

	system("pause");
	return 0;
}




