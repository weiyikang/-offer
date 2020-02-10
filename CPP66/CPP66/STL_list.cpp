#include<iostream>
#include<list>

using namespace std;

void printL(list<int> &l)
{
	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test_l()
{
	list<int> l;
	cout << "l.size():" << l.size() << endl;
	for (int i = 0; i < 10; i++)
	{
		l.push_back(i + 1);
	}
	cout << "l.size():" << l.size() << endl;

	list<int>::iterator it = l.begin();
	while (it!=l.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	//list�����������
	it = l.begin();
	it++;
	it++;
	it++;
	//it = it+5;
	//100���뵽it��λ�ã�itλ�ú���һλ
	cout << *it << endl;
	l.insert(it, 100);
	
	printL(l);

	//listɾ����[)
	list<int>::iterator it1 = l.begin();
	list<int>::iterator it2 = l.begin();
	it2++;
	it2++;
	it2++;
	l.erase(it1, it2);
	
	printL(l);

	l.remove(9);
	printL(l);

}

int main022255()
{

	test_l();
	system("pause");
	return 0;
}