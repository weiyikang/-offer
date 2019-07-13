#include<iostream>
#include<math.h>
#include<iomanip>
#include<time.h>

using namespace std;

//��ȫƽ����
void aabb()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int n = i * 1100 + j * 11;
			double m = sqrt(n);
			if (floor(m + 0.5) == m)
			{
				cout << n << endl;
			}
		}
	}
}

void aabb2()
{
	for (int i = 31; i < 100; i++)
	{
		int n = i*i;
		if ((n/1000==n/100%10) && (n/10%10 == n%10))
		{
			cout << n << endl;
		}
	}
}

//3n+1
void threeNplus1()
{
	int n;
	int count=1;
	cin >> n;
	//�жϷǷ�����
	if (n > 1e9)
	{
		return;
	}
	//ѭ������
	for (int i = 0;;i++)
	{
		if (n == 1)
		{
			cout << i << endl;
			break;
		}
		if (n & 1)
		{
			n = 3 * n + 1;
		}
		else
		{
			n = n / 2;
		}
	}
}

void plus2()
{
	int n;
	cin >> n;
	//�жϷǷ�����
	if (n > 1e9)
	{
		return;
	}
	//ѭ������
	int count = 0;
	while (n!=1)
	{
		if (n & 1)
		{
			n = 3 * n + 1;
		}
		else
		{
			n = n / 2;
		}
		count++;
	}
	cout << count << endl;
}

void plus3(int n)
{
	static int count = 0;
	if (n==1)
	{
		cout << count << endl;
		return;
	}
	if (n & 1)
	{
		count++;
		plus3(3 * n + 1);
	}
	else
	{
		count++;
		plus3(n / 2);
	}
}

//����S=1��+2!+...+n!
void factorial()
{
	int n;
	cin >> n;
	int sum = 0;
	int temp = 1;
	const int MOD = 1000000;
	for (int i = 1; i <= n; i++)
	{
		temp = (temp*i) % MOD;
		sum = (sum + temp) % MOD;
	}
	cout << sum << endl;
}

//�������
void output()
{
	int i, n;
	cin >> n;
	for (i = 2; i <= 2*n; i+=2)
	{
		cout << i << endl;
	}
}

//���������壨�жϸ�������������ȵ������
void floatFault()
{
	double i;
	for (i = 0; fabs(i-10)>1e-6; i += 0.1)
	{
		cout << fixed << setprecision(1) << i << endl;
	}
}

//64λ������ͳ��n�������Ӹ�����
void intergrate()
{
	long long n;
	cin >> n;
	int count = 0;
	for (int i = 1; i <= (long long)sqrt(n); i++)
	{
		if (n%i == 0)
		{
			if (i*i == n)
			{
				count += 1;
			}
			else
			{
				count += 2;
			}
		}
	}
	cout << count << endl;
}

//λ��
void digit()
{
	int n;
	cin >> n;
	int count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	cout << count << endl;
}

//ˮ�ɻ���
void daffodil()
{
	for (int i = 100; i < 1000; i++)
	{
		int a, b, c;
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (a*a*a + b*b*b + c*c*c == i)
		{
			cout << i << endl;
		}
	}
}

//hanxin
void hanxin()
{
	int a, b, c;
	cin >> a >> b >> c;
	int i;
	for (i = 10; i <= 100; i++)
	{
		if (i % 3 == a&&i % 5 == b&&i % 7 == c)
		{
			cout << i << endl;
			break;
		}
	}
	if (i == 101)
	{
		cout << "No answer" << endl;
	}
}


int main2014()
{
	//aabb();
	//aabb2();
	//threeNplus1();
	//plus2();
	//factorial();
	//output();
	//floatFault();
	//intergrate();
	//digit();
	//daffodil();
	hanxin();
	//clock()��������ӳ������е�������ʱ�䣨�������������ʱ�䣩
	cout << "Time(s):" << fixed << setprecision(2) << (double)clock() / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}

