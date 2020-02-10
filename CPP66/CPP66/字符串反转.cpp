#include<iostream>
#include<stack>
#include<algorithm>
#include<string>

using namespace std;

void reverseStr(string &str)
{
	int len = str.length();
	int low = 0;
	int high = len - 1;
	while (low < high)
	{
		char temp = str[low];
		str[low] = str[high];
		str[high] = temp;
		low++;
		high--;
	}
}


int main212025()
{
	string str;
	cin >> str;
	
	reverseStr(str);

	cout << str << endl;

	system("pause");
	return 0;
}

