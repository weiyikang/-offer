#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

//链表倒数第k个元素

typedef struct ListNode
{
	int val;
	ListNode *pNext;
};


//用栈实现
//1. 元素入栈
//2. 弹出k个元素，输出第k个的值
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
	//创建链表
	int n = 7;
	ListNode* node = new ListNode[n];

	for (int i = 0; i < n - 1; i++)
	{
		node[i].val = i + 1;
		node[i].pNext = &node[i + 1];
	}

	node[n - 1].val = n;
	node[n - 1].pNext = NULL;

	/*cout << "原始链表：" << endl;
	ListNode *phead = &node[0];
	while (phead!=NULL)
	{
		cout << phead->val << " ";
		phead = phead->pNext;
	}
	cout << endl;
	cout << "倒数第" << k << "个元素：" << endl;*/
	lastKElement(&node[0], k);

	system("pause");
	return 0;
}


