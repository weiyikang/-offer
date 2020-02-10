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
////Ԥ����������������
////�� '-' �����ڵ�һ��λ�û��������ź��棬����ǰ�� '0'
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
//	//�����׺���ʽ
//	vector<string> exp;
//	int i = 0;
//	stack<char> sta;
//	//ɨ��
//	while (i < strExpression.length())
//	{
//		char c = strExpression[i];
//		string temp = "";
//		//�������֣����
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
//		//���������ţ���ջ
//		else if (isLeft(c))
//		{
//			sta.push(c);
//		}
//		//������������������ȼ�������ջ
//		//�����ջ���Ĳ����������������ֱ��Ϊ�ջ��ߵ�ǰ�ַ����ȼ��ߣ���ջ
//		else if (isOperator(c))
//		{
//			while (!sta.empty()&&priority(sta.top())>=priority(c))
//			{
//				exp.push_back(temp+sta.top());
//				sta.pop();
//			}
//			sta.push(c);
//		}
//		//���������ţ����ų�ջ�����ֱ��ƥ�䵽������
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
//	//ɨ�������ջ�з��ų�ջ
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
//	//�����׺���ʽ��ֵ
//	i = 0;
//	stack<int> st;
//	//������׺���ʽ
//	while (i < exp.size())
//	{
//		//��������֣���ջ
//		string c = exp[i];
//		if (isNumber(c[0]))
//		{
//			st.push(atoi(c.c_str()));
//		}
//		//����ǲ���������ջ�õ��Ҳ������������������������󽫽����ջ
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
//	//����������ջ��Ψһ��Ԫ��Ϊ���
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
