#include<iostream>
#include<string>

using namespace std;

bool isSpace(char c)
{
	bool res = false;
	if (c == ' ')
	{
		res = true;
	}
	return res;
}

int countWord(string s)
{
	int len = s.size();
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		//扫过连续空格
		if (isSpace(s[i]))
		{
			while (i<len && isSpace(s[i]))
			{
				i++;
			}
		}
		else
		{
			count++;
			while (i<len && !isSpace(s[i]))
			{
				i++;
			}
		}
	}
	return count;
}

int main270733()
{
	string s;
	getline(cin, s);
	int res = countWord(s);
	cout << res << endl;
	system("pause");
	return 0;
}
