//����������
//��n��Ӳ�ң���ֵ�ֱ�ΪV1��V2��V3��, , VNÿ�ֶ������޶ࡣ
//�����Ǹ�����S������ѡ�ö��ٸ�Ӳ�ң�ʹ����ֵ֮��ǡ��ΪS�� 
//���Ӳ����Ŀ����Сֵ�����ֵ

//�̶��յ���·�����·
//ת̨ת�ƣ�d[S] = max{d[S-v[i]]+1, if S>=v[i]}

#include <iostream>
#include <algorithm>

using namespace std;

#define MAXN 3002

//����d,d(i)��ʾ����i��Ҫ�����Ӳ����Ŀ�����ߴﵽ״̬i��Ҫ���·��
int d[MAXN];

//Ӳ������n����Ӧ����ֵv����Ҫ�������ֵS
int n;
int v[MAXN];
int S;

//����-INF
const int inf = 1 << 30;

//���仯��������·�����
int dp(int S)
{
	int& ans = d[S];
	if (ans != -1)
	{
		return ans;
	}
	ans = -inf;
	//����n��Ӳ����һ���ܹ����㲹����ֵ����Ҫ,
	//ѡ��ѡ�÷�֧����ʹ��ǰ״̬·���������ѡ��
	for (int i = 0; i < n; i++)
	{
		if (S >= v[i])
		{
			ans = max(ans, dp(S - v[i]) + 1);
		}
	}
	return ans;
}

//���·��
void print_ans(int S)
{
	for (int i = 0; i < n; i++)
	{
		if (S >= v[i] && d[S] == d[S - v[i]] + 1)
		{
			cout << v[i] << "\t";
			print_ans(S - v[i]);
		}
	}
}


int main2132()
{
	//�������������ĿN,Ҫ�ﵽ����ֵS,Ӳ������n����Ӧ����ֵv
	int N;
	cin >> N;
	while (N--)
	{
		cin >> S;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		memset(d, -1, sizeof(d));
		d[0] = 0;
		cout << dp(S)<<endl;
		cout << "�������·����Ӳ����ϣ�" << endl;
		print_ans(S);
	}


	system("pause");
	return 0;
}

