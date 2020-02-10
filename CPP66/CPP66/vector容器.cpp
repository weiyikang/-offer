#include<iostream>
#include<vector>

using namespace std;

void test_vector()
{
	vector<int> v;
	cout << v.size() << endl;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	cout << v.front() << endl;
	v.front() = 11;
	v.back() = 44;

	while (v.size()>0)
	{
		cout << v.back() << endl;
		v.pop_back();
	}
	
}

void printV(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector删除，erase
void test_v2()
{
	vector<int> v(10);
	v.push_back(2);
	v.push_back(2);
	v.front() = 2;

	printV(v);

	for (vector<int>::iterator it = v.begin(); it < v.end();)
	{
		if (*it == 2)
		{
			//删除后迭代器自动后移
			it = v.erase(it);
		}
		else
		{
			it++;
		}
	}

	printV(v);

	//区间删除
	v.erase(v.begin(), v.begin() + 3);
	printV(v);
}

int main022156()
{
	test_v2();

	system("pause");
	return 0;
}


