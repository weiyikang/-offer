#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

void test_pq()
{
	//默认最大值优先队列
	priority_queue<int> p;
	priority_queue<int, vector<int>, less<int>> p2;
	//最小值优先队列
	//priority_queue<int, vector<int>, greater<int> > p3;
	p.push(33);
	p.push(11);
	p.push(55);
	p.push(22);

	cout << p.top() << endl;
	cout << p.size() << endl;

	while (p.size()>0)
	{
		cout << p.top() << " ";
		p.pop();
	}
	cout << endl;
}


int main030808()
{
	test_pq();
	system("pause");
	return 0;
}

