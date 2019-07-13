#include <iostream>
using namespace std;

//N����Ʒ
#define N 5
//��������
#define V 10

int main2115()
{
	//�������
	int value[N + 1] = { 0, 6, 3, 5, 4, 6 };
	int weight[N + 1] = { 0, 2, 2, 6, 5, 4 };
	//�洢����Ϊjʱǰi����Ʒ����ֵ
	int f[N + 1][V + 1] = { 0 };

	int i = 1;
	int j = 1;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= V; j++)
		{
			//���ݵ��ƹ�ϵ���
			if (j < weight[i])
			{
				f[i][j] = f[i - 1][j];
			}
			else
			{
				int x = f[i - 1][j];
				int y = f[i - 1][j - weight[i]] + value[i];
				if (x < y)
				{
					cout << "\t" << i;
				}
				f[i][j] = x > y ? x : y;
			}
		}
	}

	////������Ľ��
	//for (i = 0; i <= N; i++)
	//{
	//	for (j = 0; j <= V; j++)
	//	{
	//		cout << "\t" << f[i][j];
	//	}
	//	cout << endl;
	//}

	system("pause");
	return 0;
}

