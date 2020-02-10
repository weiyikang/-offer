#include<iostream>
#include<stack>

using namespace std;

class Teac
{
public:
	Teac();
	~Teac();
	void printT()
	{
		cout << "age:" << age << endl;
	}
public:
	int age;
	char name[32];

};

Teac::Teac()
{

}

Teac::~Teac()
{

}


void test_s()
{
	stack<int> s;
	//»Î’ª
	for (int i = 0; i < 10; i++)
	{
		s.push(i + 1);
	}
	//≥ˆ’ª
	while (!s.empty())
	{
		int tmp = s.top();
		cout << tmp << " ";
		s.pop();
	}
}

void test_s2()
{
	Teac t1, t2, t3;
	t1.age = 20;
	t2.age = 25;
	t3.age = 30;
	stack<Teac*> s;
	s.push(&t1);
	s.push(&t2);
	s.push(&t3);

	while (!s.empty())
	{
		Teac *p = s.top();
		p->printT();
		s.pop();
	}
}



int main022227()
{

	test_s2();
	system("pause");
	return 0;
}