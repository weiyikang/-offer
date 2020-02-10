#include<iostream>

using namespace std;

bool judge(int n)
{
	bool res = false;
	int x = sqrt(n);
	if (x*x == n)
	{
		res = true;
	}
	return res;
}

int main270713()
{
	int n;
	cin >> n;
	bool res = judge(n);
	cout << res << endl;
	system("pause");
	return 0;
}
