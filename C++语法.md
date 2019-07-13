### 1. 面向对象三大特性
封装，继承，多态
### 2. 全局变量与局部变量在内存的区别
全局变量在全局区，局部变量在栈区
### 3. float类型与0比较
if(var<0.000001 && var>-0.000001)
### 4. 说明描述符的区别
* const char *p
const修饰的p指向的内容不能随意改变
* char const *p
与上一项相同
* char* const p
const修饰的p必须先初始化，该指针不能指向其他地址
### 5. 说明代码的运行结果
~~~
#include<stdio.h>
union
{
    int i;
    char x[2];
}a;

void main()
{
    a.x[0] = 10;
    a.x[1] = 1;
    printf("%d",a.i);
}
~~~
union共用内存空间，结果是0000 0000 0000 0000 0000 0001 0001 0010//266或者256+10=266
### 6. 下面代码，i的值
~~~
#define DOUBLE(x) x+x
i = 5*DOUBLE(5);
~~~
i = 5*5+5=30, define为机械的替换
### 7. 下列C++中if语句哪种更好
~~~
int n;
if(n==10)//第一种方式
if(10==n)//第二种方式
~~~
第二种更好，避免n=10的赋值操作
### 8. 下列windowsNT下的32位C++程序，请计算sizeof的值
~~~
char str[] = "www.whzm.cn";
char *p = str;
int n = 10;
~~~
sizeof(str) = 12,包括字符串结尾的\n
sizeof(p) = 4, 指针类型均为4个字节
sizeof(n) = 4, int类型为4个字节
~~~
void Foo(char str[100]){}
~~~
sizeof(str) = 4, 数组名为一个一级指针
~~~
void *p = malloc(100)
~~~
sizeof(p) = 4, p为一个指针变量
### 9. 假定x = 8192, 求func函数的返回值
~~~
int func(int x)
{
    int countx = 0;
    while(x)
    {
        ++countx;
        x = x&(x-1);
    }
    return countx;
}
~~~
countx = 1, 8191与8192相比每一位都不相同，因此第一次循环x = 0；如果题目中传入的x = 8191，那么8191与8190仅最后一位不同，8191&8190=8190，接下来是8190&8189=0，循环两次结束，countx = 2。
### 10. 写函数求1+2+3+...+n(假设结果不超过长整型变量范围)
~~~
long int sum(long int n)
{
    return n*(n+1)/2;
}
~~~
### 11. 使用模板实现swap函数，在不使用第三个参数的情况下交换参数值
~~~
template <typename T>
void swap_T(T &a, T &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
~~~
### 12. Shape类为表示形状的抽象类，从Shape类派生三角形类（Triangle），给出求面积函数
~~~
class Shape
{
    public:
    virtual float area()=0;
}

class Triangle:public Shape
{
public:
	Triangle(float a, float b, float c);
	~Triangle();
	float area();
private:
	float eige1;
	float eige2;
	float eige3;
};

Triangle::Triangle(float a, float b, float c)
{
	eige1 = a;
	eige2 = b;
	eige3 = c;
}

Triangle::~Triangle()
{
}

float Triangle::area()
{
	float result = (eige1 + eige2 + eige3) / 2;
	return result;
}
~~~
### 13. 编写strcpy及strlen函数
~~~
//字符串长度
int strlen(char *str)
{
	int res = -1;
	if (NULL == str)
	{
		cout << "str==NULL" << endl;
		return res;
	}
	res = 0;
	while (*str++ != '\0')
	{
		res++;
	}
	return res;
}

//字符串拷贝
char * strcpy(char *dst, const char *src)
{
	if (NULL == dst || NULL == src)
	{
		cout << "NULL erro!" << endl;
		return NULL;
	}

	if (strlen(dst) < strlen(src))
	{
		cout << "strlen(dst)<strlen(src)" << endl;
		return NULL;
	}

	char *res = dst;
	while ((*dst++ = *src++) != '\0'){}
	return res;
}
~~~
### 14. 实现String类的函数
~~~
class String
{
public:
	//普通构造函数
	String(const char *str=NULL);
	//拷贝构造函数
	String(const String &other);
	//析构函数
	~String(void);
	//赋值构造函数
	String & operator=(const String &other);
	//输出m_data
	void showData();
	
private:
	char *m_data;
};

String::String(const char *str)
{
	if (str == NULL)
	{
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		m_data = new char[strlen(str) + 1];
		strcpy(m_data, str);
	}
}

String::String(const String &other)
{
	m_data = new char[strlen(other.m_data) + 1];
	strcpy(m_data, other.m_data);
}

String::~String(void)
{
	cout << "destructor!" << endl;
	if (NULL != m_data)
	{
		delete[] m_data;
		m_data = NULL;
	}
}

String & String::operator=(const String &other)
{
	//对象与other为同一对象直接返回本身
	if (this == &other)
	{
		return *this;
	}
	delete[] m_data;
	m_data = new char[strlen(other.m_data) + 1];
	strcpy(m_data, other.m_data);
	return *this;
}

void String::showData()
{
	if (NULL != m_data)
	{
		cout << m_data << endl;
	}
}
~~~




