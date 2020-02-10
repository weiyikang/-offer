//#include<iostream>
//#include<algorithm>
//#include<stack>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int isNumber(char c)
//{
//	int res = 0;
//	if (c >= '0'&&c <= '9')
//	{
//		res = 1;
//	}
//	return res;
//}
//
//int isLeft(char c)
//{
//	int res = 0;
//	if (c == '(' || c == '[' || c == '{')
//	{
//		res = 1;
//	}
//	return res;
//}
//
//int isRight(char c)
//{
//	int res = 0;
//	if (c == ')' || c == ']' || c == '}')
//	{
//		res = 1;
//	}
//	return res;
//}
//
//int match(char c1, char c2)
//{
//	int res = 0;
//	if (c1 == '('&&c2 == ')')
//	{
//		res = 1;
//	}
//	else if (c1 == '['&&c2 == ']')
//	{
//		res = 1;
//	}
//	else if (c1 == '{'&&c2 == '}')
//	{
//		res = 1;
//	}
//	return res;
//}
//
//int isOperator(char c)
//{
//	int res = 0;
//	if (c == '+' || c == '-' || c == '*' || c == '/')
//	{
//		res = 1;
//	}
//	return res;
//}
//
//int priority(char c)
//{
//	int res = 0;
//	if (c == '+' || c == '-')
//	{
//		res = 1;
//	}
//	else if (c == '*' || c == '/')
//	{
//		res = 2;
//	}
//	return res;
//}
//
//char calc(int c2, char op, int c1)
//{
//	int res = 0;
//	
//	if (op == '+')
//	{
//		res = c2 + c1;
//	}
//	else if (op == '-')
//	{
//		res = c2 - c1;
//	}
//	else if (op == '*')
//	{
//		res = c2 * c1;
//	}
//	else if (op == '/')
//	{
//		res = c2 / c1;
//	}
//	return res;
//}
//
////预处理解决负数的问题
////若 '-' 出现在第一个位置或者左括号后面，加上前导 '0'
//void preProcess(string &str)
//{
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == '-')
//		{
//			if (i == 0)
//			{
//				str.insert(0, 1, '0');
//			}
//			else if (isLeft(str[i - 1]))
//			{
//				str.insert(i, 1, '0');
//			}
//		}
//	}
//}
//
//int calculate(string strExpression)
//{
//	//preProcess(strExpression);
//	//计算后缀表达式
//	vector<string> exp;
//	int i = 0;
//	stack<char> sta;
//	//扫描
//	while (i < strExpression.length())
//	{
//		char c = strExpression[i];
//		string temp = "";
//		//遇到数字，输出
//		if (isNumber(c))
//		{
//			temp += c;
//			while (i + 1 < strExpression.length() && isNumber(strExpression[i + 1]))
//			{
//				temp += strExpression[i + 1];
//				i++;
//			}
//			exp.push_back(temp);
//		}
//		//遇到左括号，入栈
//		else if (isLeft(c))
//		{
//			sta.push(c);
//		}
//		//遇到操作符，如果优先级高则入栈
//		//否则把栈顶的操作符弹出且输出，直至为空或者当前字符优先级高，入栈
//		else if (isOperator(c))
//		{
//			while (!sta.empty()&&priority(sta.top())>=priority(c))
//			{
//				exp.push_back(temp+sta.top());
//				sta.pop();
//			}
//			sta.push(c);
//		}
//		//遇到右括号，符号出栈输出，直到匹配到左括号
//		else if (isRight(c))
//		{
//			while (!match(sta.top(), c))
//			{
//				exp.push_back(""+sta.top());
//				sta.pop();
//			}
//			sta.pop();
//		}
//		i++;
//	}
//	//扫描结束，栈中符号出栈
//	while (!sta.empty())
//	{
//		exp.push_back(""+sta.top());
//		sta.pop();
//	}
//
//	for (int i = 0; i < exp.size(); i++)
//	{
//		cout << exp[i] << " ";
//	}
//	cout << endl;
//
//	//计算后缀表达式的值
//	i = 0;
//	stack<int> st;
//	//遍历后缀表达式
//	while (i < exp.size())
//	{
//		//如果是数字，入栈
//		string c = exp[i];
//		if (isNumber(c[0]))
//		{
//			st.push(atoi(c.c_str()));
//		}
//		//如果是操作符，出栈得到右操作数、左操作数，进行运算后将结果入栈
//		else if (isOperator(c[0]))
//		{
//			int c1 = st.top();
//			st.pop();
//			int c2 = st.top();
//			st.pop();
//			int res = calc(c2, c[0], c1);
//			sta.push(res);
//		}
//		i++;
//	}
//	//遍历结束，栈中唯一的元素为结果
//	int res = st.top();
//	
//	return res;
//}
//
//
//int main221609()
//{
//	string str;
//	cin >> str;
//	int res = calculate(str);
//	cout << res << endl;
//
//	system("pause");
//	return 0;
//}
//
//
