//#include<iostream>
//#include<algorithm>
//#include<stack>
//#include<vector>
//#include<string>
//
//using namespace std;
//#define N 200000+1
//
//
////判断是操作符
//int isOperator(const char s)
//{
//	int res = 0;
//	if (s == '+' || s == '-' || s == '*' || s == '/')
//	{
//		res = 1;
//	}
//	return res;
//}
//
////操作符优先级
//int priority(char s)
//{
//	int res = 0;
//	if (s == '+' || s == '-')
//	{
//		res = 1;
//	}
//	else if (s == '*' || s == '/')
//	{
//		res = 2;
//	}
//	return res;
//}
//
//void trans(const char* s)
//{
//	int i = 0;
//	stack<char> sta;
//	//遍历字符串
//	while (s[i] != '\0')
//	{
//		//遇到数字直接输出
//		if ((s[i] >= 'a') && (s[i] <= 'z'))
//		{
//			cout << s[i];
//		}
//		//遇到左括号，入栈
//		else if (s[i] == '(')
//		{
//			sta.push(s[i]);
//		}
//		//遇到操作符
//		else if (isOperator(s[i]))
//		{
//			//当前字符优先级不高于栈顶，输出栈顶，栈顶出栈，
//			//直到当前字符优先级高于栈顶或者栈为空，当前字符入栈
//			if (!sta.empty())
//			{
//				while (!sta.empty() && priority(s[i]) <= priority(sta.top()))
//				{
//					cout << sta.top();
//					sta.pop();
//				}
//			}
//			sta.push(s[i]);
//		}
//		//遇到右括号，栈中元素出栈并输出，直到遇到左括号
//		else if (s[i] == ')')
//		{
//			while (sta.top() != '(')
//			{
//				cout << sta.top();
//				sta.pop();
//			}
//		}
//		i++;
//	}
//	//遍历结束后输出栈中的元素
//	while (!sta.empty())
//	{
//		cout << sta.top();
//		sta.pop();
//	}
//}
//
//
//int main211947()
//{
//	char s[N];
//	cin >> s;
//	//cout << s;
//	trans(s);
//
//	system("pause");
//	return 0;
//}
//
//
