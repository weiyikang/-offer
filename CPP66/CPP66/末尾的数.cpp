#include<iostream>
using namespace std;
using int64 = long long;

int main191734()
{
	int N; cin >> N;
	int c2 = 0, c5 = 0;
	int gsum = 1;
	for (int i = 1; i <= N; ++i)
	{
		int j = i;
		while (j % 5 == 0) ++c5, j /= 5;
		while (j % 2 == 0) ++c2, j /= 2;
		gsum = (gsum * j) % 10;
	}
	c5 -= c2;
	c2 = -c5;
	for (; c5 > 0; gsum = (gsum * 5) % 10, --c5);
	for (; c2 > 0; gsum = (gsum * 2) % 10, --c2);
	cout << gsum << endl;
	system("pause");
	return 0;
}