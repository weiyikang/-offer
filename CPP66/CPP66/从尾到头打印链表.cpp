#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

//��������ڵ�
typedef struct ListNode
{
public:
	int val;
	struct ListNode *next;
}ListNode;

class Solution {
public:
	vector<int> res;

	//�ݹ�ʵ��
	vector<int> printListFromTailToHead(ListNode* head) {
		if (head != NULL)
		{
			printListFromTailToHead(head->next);
			res.push_back(head->val);
			//cout << head->val << endl;
		}
		return res;
	}

	//��ջʵ�֣�����ݹ�ջ���
	//1. ˳�������Ԫ����ջ
	//2. Ԫ�س�ջ����������
	vector<int> printListFromTailToHead2(ListNode* head) {

		stack<ListNode*> nodes;
		ListNode *pnode = head;
		while (pnode != NULL)
		{
			nodes.push(pnode);
			pnode = pnode->next;
		}

		while (!nodes.empty())
		{
			res.push_back(nodes.top()->val);
			nodes.pop();
		}
		return res;
	}

};


int main200956()
{
	//����һ������
	ListNode list[4];
	list[0].val = 1;
	list[0].next = &list[1];
	list[1].val = 2;
	list[1].next = &list[2];
	list[2].val = 3;
	list[2].next = &list[3];
	list[3].val = 4;
	list[3].next = NULL;
	Solution sln;
	vector<int> res;
	res = sln.printListFromTailToHead2(list);
	vector<int>::iterator it = res.begin();
	for (; it != res.end(); ++it)
	{
		cout << (*it) << " ";
	}
	system("pause");
	return 0;
}




