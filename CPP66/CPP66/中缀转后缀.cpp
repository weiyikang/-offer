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
////�ж��ǲ�����
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
////���������ȼ�
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
//	//�����ַ���
//	while (s[i] != '\0')
//	{
//		//��������ֱ�����
//		if ((s[i] >= 'a') && (s[i] <= 'z'))
//		{
//			cout << s[i];
//		}
//		//���������ţ���ջ
//		else if (s[i] == '(')
//		{
//			sta.push(s[i]);
//		}
//		//����������
//		else if (isOperator(s[i]))
//		{
//			//��ǰ�ַ����ȼ�������ջ�������ջ����ջ����ջ��
//			//ֱ����ǰ�ַ����ȼ�����ջ������ջΪ�գ���ǰ�ַ���ջ
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
//		//���������ţ�ջ��Ԫ�س�ջ�������ֱ������������
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
//	//�������������ջ�е�Ԫ��
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
