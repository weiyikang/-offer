#include<iostream>
#include<vector>

using namespace std;

//[100 101 99 97 104]
//i = 0:len-n
vector<double> moving_average(vector<double> A, int n)
{
	int len = A.size();
	vector<double> res;
	for (int i = 0; i <= len-n; i++)
	{
		double temp = (A[i] + A[i + 1] + A[i + 2]) / 3.0;
		res.push_back(temp);
	}
	return res;
}


int main280951()
{
	vector<double> A = { 100, 101, 99, 97, 104 };
	int n = 3;
	vector<double> res = moving_average(A, n);
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	system("pause");
	return 0;
}


