#include<iostream>
#include<algorithm>

using namespace std;


typedef struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
	ListNode(){
		val = 0;
		next = NULL;
	}
}ListNode;

class Solution {
public:
	//��ָ�뷴ת
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL)
		{
			return pHead;
		}

		ListNode *pre = NULL;
		ListNode *cur = pHead;
		ListNode *next = pHead->next;
		while (next != NULL)
		{
			ListNode *temp = next->next;
			cur->next = pre;
			next->next = cur;    //�ı�ָ��ָ�� cur->pre, nex->cur

			pre = cur;
			cur = next;
			next = temp;   //����һ���� pre = cur, cur = next, next = temp
		}
		return cur;
	}
};


int main201205()
{
	int n = 2;
	ListNode* node = new ListNode[n];

	for (int i = 0; i < n-1; i++)
	{
		node[i].val = i;
		node[i].next = &node[i + 1];
	}

	node[n - 1].val = n-1;

	//��תǰ
	cout << "ԭʼ����" << endl;
	ListNode *phead = &node[0];
	while (phead!=NULL)
	{
		cout << phead->val << " ";
		phead = phead->next;
	}
	cout << endl;

	Solution sln;
	phead = sln.ReverseList(&node[0]);

	//������
	cout << "��ת����" << endl;
	while (phead != NULL)
	{
		cout << phead->val << " ";
		phead = phead->next;
	}
	cout << endl;

	system("pause");
	return 0;
}


