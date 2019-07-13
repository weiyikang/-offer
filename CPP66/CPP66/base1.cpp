#include<iostream>
#include<iomanip>
#include<math.h>
#include<bitset>

using namespace std;

#define EPS 1e-6

//反转三位数
void inverse()
{
	int n;
	cin >> n;
	int m = (n % 10) * 100 + (n / 10 % 10) * 10 + (n / 100);
	cout << m << endl;
}

//交换整数
void transfer()
{
	int m, n;
	cin >> m >> n;
	m = m + n;
	n = m - n;
	m = m - n;
	cout << m << " " << n << endl;
}

//异或运算交换整数
void transfer2()
{
	int m, n;
	cin >> m >> n;
	m ^= n ^= m ^= n;
	cout << m << " " << n << endl;
}

//鸡兔同笼
void chickenRabbit()
{
	int n, m;
	int a, b;
	cin >> n >> m;
	a = (4*n - m) / 2;
	b = n - a;
	if (m % 2 == 1 || a < 0 || b << 0)
	{
		cout << "No answer" << endl;
	}
	else
	{
		cout << a << " " << b << endl;
	}
}

//三整数排序
void sort3int()
{
	int a, b, c;
	cin >> a >> b >> c;
	int t;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	cout << a << " " << b << " " << c << endl;
}

void sort3int2()
{
	int a, b, c;
	cin >> a >> b >> c;
	int t;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	cout << a << " " << b << " " << c << endl;
}

//连续1相乘
void dataType1()
{
	int n;
	cin >> n;
	cout << n*n << endl;
}

//输出 \n
void printn()
{
	cout << "\\n" << endl;
}

//输出 %d
void printd()
{
	cout << "\%d" << endl;
}

//输出int最大值，最小值
void printint()
{
	int n = 0;
	int max = (unsigned)(-1) >> 1;
	int min = max + 1;

	/*while (1)
	{
		if (n + 1 < 0)
		{
			max = n;
			min = n + 1;
			break;
		}
		n++;
	}*/
	cout << "max:"<< max<<" min:"<< min << endl;
}

//模糊代码
void confuzing()
{
	int a = 3, b = 4, x = 5, y = 6;
	if (a) if (b) x++; else y++;
	cout << a << " " << b << " " << x << " " << y << " " << endl;
}

//平均数
void avg()
{
	int l, m, n;
	cin >> l >> m >> n;
	cout <<fixed << setprecision(3) << (l + m + n) / 3.0 << endl;
}

//华氏转摄氏度
void temperature()
{
	double f, c;
	cin >> f;
	c = 5*(f-32)/9.0;
	int d = c;
	cout << fixed << setprecision(3) << c << " " << d << endl;
}

//连续和
void sum()
{
	int n, result;
	cin >> n;
	result = n*(n - 1) / 2;
	cout << result << endl;
}

//正弦余弦
void sincos()
{
	int n;
	double s, c;
	const double pi = acos(-1);
	cin >> n;
	s = sin(n*pi/180);
	c = cos(n*pi/180);
	cout << s << " " << c << endl;
}

//欧氏距离
void distance()
{
	float x1, x2, y1, y2;
	double dis;
	cin >> x1 >> y1 >> x2 >> y2;
	dis = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	cout << dis << endl;
}

//偶数判断
void odd()
{
	int n;
	cin >> n;
	if (n % 2 == 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}

void odd2()
{
	int n;
	cin >> n;
	n % 2 ? cout << "no" << endl : cout << "yes" << endl;
}

void odd3()
{
	int n;
	cin >> n;
	if (n & 1)
	{
		cout << "no" << endl;
	}
	else
	{
		cout << "yes" << endl;
	}
}

//打折
void discount()
{
	int n;
	double price;
	const int per = 95, total = 300;
	const double rate = 0.85;
	cin >> n;
	price = n*per >= total ? n*per*rate : n*per;
	cout << fixed << setprecision(2) << price << endl;
}

//绝对值
void abs()
{
	double n;
	cin >> n;
	n > 0 ? cout << n << endl : cout << -n << endl;
}

//直角三角形
void triangle()
{
	int a, b, c;
	cin >> a >> b >> c;
	//递增排序
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	if (b > c)
	{
		int t = b;
		b = c;
		c = t;
	}

	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	//判断是否是直角三角形
	if (a + b > c)
	{
		if (a*a + b*b == c*c)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	else
	{
		cout << "not a triangle" << endl;
	}
}

//是否为闰年
//(year%4==0&&year%100!=0)||year%400==0
void year()
{
	int n;
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
}

int main271930()
{
	//inverse();
	//transfer();
	//transfer2();
	//chickenRabbit();
	//sort3int();
	//sort3int2();
	//dataType1();
	//printn();
	//printd();
	//printint();
	//confuzing();
	//avg();
	//temperature();
	//sum();
	//sincos();
	//distance();
	//odd3();
	//discount();
	//abs();
	//triangle();
	//year();

	system("pause");
	return 0;
}




