#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

//��������k��Ԫ��

typedef struct ListNode
{
	int val;
	ListNode *pNext;
};


//��ջʵ��
//1. Ԫ����ջ
//2. ����k��Ԫ�أ������k����ֵ
void lastKElement(ListNode *phead, int k)
{
	stack<int> res;
	ListNode *node = phead;
	while (node!=NULL)
	{
		res.push(node->val);
		node = node->pNext;
	}
	
	int value;
	for (int i = 0; i < k; i++)
	{
		value = res.top();
		res.pop();
	}

	cout << value << endl;
}


int main201509()
{
	int k;
	cin >> k;
	//��������
	int n = 7;
	ListNode* node = new ListNode[n];

	for (int i = 0; i < n - 1; i++)
	{
		node[i].val = i + 1;
		node[i].pNext = &node[i + 1];
	}

	node[n - 1].val = n;
	node[n - 1].pNext = NULL;

	/*cout << "ԭʼ����" << endl;
	ListNode *phead = &node[0];
	while (phead!=NULL)
	{
		cout << phead->val << " ";
		phead = phead->pNext;
	}
	cout << endl;
	cout << "������" << k << "��Ԫ�أ�" << endl;*/
	lastKElement(&node[0], k);

	system("pause");
	return 0;
}


