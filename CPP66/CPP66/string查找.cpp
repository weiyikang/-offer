#include<iostream>
#include<string>

using namespace std;


int main312100()
{
	string s1 = "weiyikang hello weiyikang 111 weiyikang 222 weiyikang 333";
	int index = s1.find("weiyikang", 0);
	cout << "index:" << index << endl;

	//×Ö·û´®²éÕÒ
	int offindex = s1.find("weiyikang", 0);
	while (offindex!=string::npos)
	{
		cout << "offindex:" << offindex << endl;
		offindex = offindex + 1;
		offindex = s1.find("weiyikang", offindex);
	}

	//×Ö·û´®Ìæ»»
	offindex = s1.find("weiyikang", 0);
	while (offindex!=string::npos)
	{
		s1.replace(offindex, 9, "WYK");
		offindex = offindex + 1;
		offindex = s1.find("weiyikang", offindex);
	}
	cout << s1 << endl;

	s1 = "hello1 hello2 hello1";
	string::iterator it = find(s1.begin(), s1.end(), '1');
	if (it != s1.end())
	{
		s1.erase(it);
	}
	cout << s1 << endl;

	system("pause");
	return 0;
}


