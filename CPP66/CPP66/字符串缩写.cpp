#include<iostream>
#include<string>

using namespace std;

string abbre(string s)
{
	string res = "";
	int len = s.size();
	for (int i = 0; i < len; i++)
	{
		if (s[i] == ' ')
		{
			while (i < len && s[i] == ' ')
			{
				i++;
			}
		}
		else
		{
			res += s[i];
			while (i < len && s[i] != ' ')
			{
				i++;
			}
		}
	}
	return res;
}


int main270743()
{
	string s;
	getline(cin, s);
	string res = abbre(s);
	cout << res << endl;
	system("pause");
	return 0;
}

