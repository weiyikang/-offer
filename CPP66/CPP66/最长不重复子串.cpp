#include<iostream>
#include<algorithm>
#include<stack>
#include<string>

using namespace std;


int main111630()
{
	string s;
	cin >> s;
	stack<char> sta;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			sta.push(s[i]);
		}
		else if (s[i] == ')')
		{
			sta.pop();
		}
		else if (s[i] == '0')
		{
			break;
		}
	}
	int res = sta.size();
	cout << res << endl;

	system("pause");
	return 0;
}

