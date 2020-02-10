#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

#define MAXL 51


//ÅÐ¶Ï½»´í´®
int isCrossStr(char* str)
{
	if (str == NULL)
	{
		return -1;
	}
	if (*str == '\0')
	{
		return -2;
	}

	int len = strlen(str);
	for (int i = 0; i < len-1; i++)
	{
		if (*(str+i) == *(str + i + 1))
		{
			return 0;
		}
	}

	return 1;
}


int main021126()
{
	char* srcStr = (char *)malloc(MAXL * sizeof(char));
	int resLengh = 0;
	cin>>srcStr;

	/*cout << isCrossStr(srcStr) << endl;*/


	int srcLen = strlen(srcStr);

	for (int i = 0; i < srcLen; i++)
	{
		for (int j = srcLen-i; j >0; j--)
		{
			char subStr[MAXL] = { '\0' };
			strncpy(subStr, srcStr + i, j);
			if (isCrossStr(subStr))
			{
				if (strlen(subStr) > resLengh)
				{
					resLengh = strlen(subStr);
				}
			}
		}
	}

	cout << resLengh << endl;

	system("pause");
	return 0;
}


