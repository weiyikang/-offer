#include<iostream>
#include<vector>

using namespace std;

class Teacher
{
public:
	Teacher();
	~Teacher();
	int age;
	char name[64];
private:
	
};

Teacher::Teacher()
{
}

Teacher::~Teacher()
{
}

void test1()
{
	//1. 容器，把元素拷贝到容器中
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(3);

	//2. 迭代器，相当于一个指针
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//3. 算法，算法和迭代器无缝连接
	int num = count(v.begin(), v.end(), 3);
	cout << "num: " << num << endl;

}

void test2()
{
	Teacher t1, t2, t3;
	t1.age = 31;
	t2.age = 35;
	t3.age = 20;
	vector<Teacher> v;
	v.push_back(t1);
	v.push_back(t2);
	v.push_back(t3);

	for (vector<Teacher>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << it->age << " ";
	}
	cout << endl;

}

void test3()
{
	Teacher t1, t2, t3;
	t1.age = 31;
	t2.age = 35;
	t3.age = 20;
	Teacher *p1, *p2, *p3;
	p1 = &t1;
	p2 = &t2;
	p3 = &t3;
	vector<Teacher *> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	for (vector<Teacher *>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << (*it)->age << " ";
	}
	cout << endl;

}

int main291627()
{
	//test1();
	//test2();
	test3();

	system("pause");
	return 0;
}

