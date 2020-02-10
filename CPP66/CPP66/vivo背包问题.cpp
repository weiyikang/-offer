#include<iostream>
#include<vector>

using namespace std;


int main160829()
{
	vector<int> v;
	int num;
	while (cin >> num)
	{
		v.push_back(num);
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}


