#include<iostream>
#include<algorithm>
using namespace std;


int main131422()
{
	int n;
	cin >> n;
	double* a = (double*)malloc(n*sizeof(double));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	//���Ķ�̬�滮
	//s[i] = max(s[i-1]+a[i],s[i-1])
	//s[i]ָǰi���������������֮��
	double* s = (double*)malloc(n*sizeof(double));
	s[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		s[i] = max(s[i - 1] + a[i], s[i - 1]);
	}
	cout << s[n - 1] << endl;

	system("pause");
	return 0;
}


