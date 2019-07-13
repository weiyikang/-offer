#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

//定义链表节点
struct ListNode
{
public:
	int val;
	struct ListNode *next;
};

class Solution {
public:
	vector<int> res;
	vector<int> printListFromTailToHead(ListNode* head) {
		if (head!=NULL)
		{
			printListFromTailToHead(head->next);
			res.push_back(head->val);
			//cout << head->val << endl;
		}
		return res;
	}
};

int main021713()
{
	//创建一个链表
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
	sln.printListFromTailToHead(list);
	system("pause");
	return 0;
}




