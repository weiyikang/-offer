//每个输入包含一个测试用例。
//每个测试用例的第一行包含一个正整数，表示闹钟的数量N(N <= 100)。
//接下来的N行每行包含两个整数，表示这个闹钟响起的时间为Hi(0 <= A<24)时Mi(0 <= B<60)分。
//接下来的一行包含一个整数，表示从起床算起他需要X(0 <= X <= 100)分钟到达教室。
//接下来的一行包含两个整数，表示上课时间为A(0 <= A<24)时B(0 <= B<60)分。
//数据保证至少有一个闹钟可以让牛牛及时到达教室。

#include<iostream>
using namespace std;

#define MAXN 101
int N;
int X;

struct Time
{
	int H;
	int M;
};
Time clock_time[MAXN];
Time class_time;

int main291912()
{
	//输入
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int h = 0;
		int m = 0;
		cin >> h;
		cin >> m;
		clock_time[i].H = h;
		clock_time[i].M = m;
	}
	cin >> X;
	cin >> class_time.H;
	cin >> class_time.M;

	//计算
	Time x_time;
	x_time.H = X / 60;
	x_time.M = X % 60;

	//计算闹钟时间差
	int diff_minute[MAXN] = { 0 };
	for (int i = 0; i < N; i++)
	{
		diff_minute[i] = 60 * (class_time.H - clock_time[i].H - x_time.H) + (class_time.M - clock_time[i].M - x_time.M);
	}

	int idx = 0;
	for (int i = 0; i < N; i++)
	{
		if (diff_minute[i]>=0)
		{
			if (diff_minute[idx]>diff_minute[i])
			{
				idx = i;
			}
		}
	}

	cout << clock_time[idx].H << " " << clock_time[idx].M << endl;

	system("pause");
	return 0;
}

