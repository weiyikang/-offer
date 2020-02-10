#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>

using namespace std;


int main222244()
{
	string ss;
	cin >> ss;

	//ÇÐ·Öµ¥´Ê
	stringstream sstr(ss);
	vector<string> vec;
	string temp;
	while (getline(sstr, temp, ','))
	{
		vec.push_back(temp);
	}

	/*for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
*/
	//°´ÕÕÃ°ÅÝ½øÐÐÄæÐòÅÅÐò
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec.size() - 1 - i; j++)
		{
			if (vec[j].compare(vec[j + 1])>0)
			{
				swap(vec[i], vec[j + 1]);
			}
		}
	}


	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ",";
	}

	system("pause");
	return 0;
}
