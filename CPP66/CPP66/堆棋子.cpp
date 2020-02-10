//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//#include<iostream>
//#include<string>
//using namespace std;
//
//const int N = 1e5 + 10;
//int a[N];
//
//int main051641()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		sort(a, a + n);
//		swap(a[n - 2], a[n - 1]);
//		bool f = 0;
//		for (int i = 0; i < n; i++)
//		{
//			int pre = (i - 1 + n) % n;
//			int sub = (i + 1) % n;
//			if (a[pre] + a[sub] <= a[i])
//			{
//				f = 1;
//			}
//		}
//		if (f)
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			cout << "YES" << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
//
