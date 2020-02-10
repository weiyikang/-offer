#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

void printD(deque<int> &d)
{
	for (deque<int>::iterator it = d.begin(); it < d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_deque()
{
	deque<int> d;
	d.push_back(1);
	d.push_back(3);
	d.push_back(5);

	d.push_front(-11);
	d.push_front(-33);
	d.push_front(-55);

	printD(d);

	cout << d.front() << endl;
	cout << d.back() << endl;

	d.pop_front();
	d.pop_back();

	printD(d);

	//查找元素的下标
	deque<int>::iterator it = find(d.begin(), d.end(), -33);
	if (it != d.end())
	{
		cout << distance(d.begin(), it) << endl;
	}
	else
	{
		cout << "Not Fount!" << endl;
	}

}

int main022207()
{
	test_deque();

	system("pause");
	return 0;
}

