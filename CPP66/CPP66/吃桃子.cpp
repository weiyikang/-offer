#include<iostream>

using namespace std;

int totalPeach(int day, int total)
{
	if (day == 1)
	{
		return total;
	}
	totalPeach(day - 1, 2 * (total + 1));
}

int totalPeach2(int day, int total)
{
	int res = total;
	for (int i = day-1; i >=1; i--)
	{
		res = 2 * (res + 1);
	}
	return res;
}

int main270639()
{
	int res = totalPeach2(10, 1);
	//res = totalPeach(10, 1);
	cout << res << endl;

	system("pause");
	return 0;
}


