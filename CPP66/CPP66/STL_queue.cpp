#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

class Teach
{
public:
	Teach();
	~Teach();
	void printT()
	{
		cout << "age:" << age << endl;
	}
public:
	int age;
	char name[32];

};

Teach::Teach()
{

}

Teach::~Teach()
{

}

void test_q()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	cout << "q.front():" << q.front() << endl;
	cout << "q.size():" << q.size() << endl;
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

void test_q2()
{
	Teach t1, t2, t3;
	t1.age = 22;
	t2.age = 33;
	t3.age = 44;

	queue<Teach*> q;
	q.push(&t1);
	q.push(&t2);
	q.push(&t3);

	while (!q.empty())
	{
		q.front()->printT();
		q.pop();
	}
}

int main022236()
{
	test_q2();

	system("pause");
	return 0;
}