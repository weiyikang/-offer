
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include<string>
#include <algorithm>
#include <queue>
using namespace std;

typedef struct BiTNode
{
	char data;
	BiTNode *lchild;
	BiTNode *rchild;
}BiTNode, *PBiTNode;

int FindComma(char* s, int len)
{
	int match = 0;
	int i;
	for (i = 0; i < len; i++)
	{
		if (s[i] == '(')
			++match;
		else if (s[i] == ')')
			--match;
		if (match == 0 && s[i] == ',')
			break;
	}
	return i;
}
PBiTNode CreateBiTree(char* s, int len)
{
	//    if(len <= 0)
	//        return NULL;
	if (s[0] == '#')
		return NULL;
	PBiTNode root = (PBiTNode)malloc(sizeof(BiTNode));
	root->data = s[0];
	if (len == 1)
	{
		root->lchild = NULL;
		root->rchild = NULL;
	}
	else
	{
		int commaPos = FindComma(s + 2, len - 2);
		root->lchild = CreateBiTree(s + 2, commaPos);
		root->rchild = CreateBiTree(s + 2 + commaPos + 1, len - 3 - commaPos - 1);
	}
	return root;
}


void PostOrderTraverse(PBiTNode root)
{
	if (root)
	{

		PostOrderTraverse(root->lchild);
		printf("%c", root->data);
		printf(" ");
		PostOrderTraverse(root->rchild);
	}
}

string preprocess(char s[], int len)
{
	string res = "";
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '('&& s[i+1]==',')
		{
			res += s[i];
			res += "#";
		}
		else if (s[i]==',' && s[i+1]==')')
		{
			res += ",#";
		}
		else
		{
			res += s[i];
		}
	}
	return res;
}


int main081637()
{
	char str[200];
	cin >> str;

	string s = preprocess(str, strlen(str));
	char s1[300];
	//cout << s << endl;
	strcpy(s1, s.c_str());
	int len = s.length();
	PBiTNode T = (PBiTNode)malloc(sizeof(BiTNode));
	T = CreateBiTree(s1, len);

	PostOrderTraverse(T);
	cout << endl;

	system("pause");
	return 0;
}