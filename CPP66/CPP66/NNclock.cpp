//ÿ���������һ������������
//ÿ�����������ĵ�һ�а���һ������������ʾ���ӵ�����N(N <= 100)��
//��������N��ÿ�а���������������ʾ������������ʱ��ΪHi(0 <= A<24)ʱMi(0 <= B<60)�֡�
//��������һ�а���һ����������ʾ������������ҪX(0 <= X <= 100)���ӵ�����ҡ�
//��������һ�а���������������ʾ�Ͽ�ʱ��ΪA(0 <= A<24)ʱB(0 <= B<60)�֡�
//���ݱ�֤������һ�����ӿ�����ţţ��ʱ������ҡ�

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
	//����
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

	//����
	Time x_time;
	x_time.H = X / 60;
	x_time.M = X % 60;

	//��������ʱ���
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

