#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;


int main191706()
{
	int n;
	cin >> n;
	char *a = new char[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	stack<char> st;
	int count = 0;
	int i = 1;
	while (count<n)
	{
		cout << a[i] << endl;
		if (i == 1)
		{
			st.push(i);
		}
		else if (a[i] == '#')
		{

		}
	}

	system("pause");
	return 0;
}

