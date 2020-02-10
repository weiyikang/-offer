#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

struct BiTNode
{
	int data;
	BiTNode *lchild;
	BiTNode *rchild;
};

//一直向左，找到中序遍历的起点
BiTNode* goLeft(BiTNode *T, stack<BiTNode *> &s)
{
	if (T == NULL)
	{
		return T;
	}
	//直到T没有左子树，否则一直往左走
	while (T->lchild!=NULL)
	{
		s.push(T);
		T = T->lchild;
	}
	return T;
}

void inOrder2(BiTNode *T)
{
	BiTNode *t = NULL;
	stack<BiTNode *> s;

	//一直向左走，直到第一个左子树为空的节点
	t = goLeft(T, s);

	while (t)
	{
		cout << t->data << " ";
		//如果t有右子树，重复步骤1
		if (t->rchild != NULL)
		{
			t = goLeft(t->rchild, s);
		}
		//如果t没有右子树，根据栈顶指示回退
		else if (!s.empty())
		{
			t = s.top();
			s.pop();
		}
		//如果t没有右子树，且栈顶为空
		else
		{
			t = NULL;
		}
	}
}

void inOrder(BiTNode *root)
{
	if (root == NULL)
	{
		return;
	}
	inOrder(root->lchild);
	cout << root->data << " ";
	inOrder(root->rchild);
}


int main062002()
{
	BiTNode t1, t2, t3, t4, t5;
	memset(&t1, 0, sizeof(BiTNode));
	memset(&t2, 0, sizeof(BiTNode));
	memset(&t3, 0, sizeof(BiTNode));
	memset(&t4, 0, sizeof(BiTNode));
	memset(&t5, 0, sizeof(BiTNode));

	t1.data = 1;
	t2.data = 2;
	t3.data = 3;
	t4.data = 4;
	t5.data = 5;

	t1.lchild = &t2;
	t1.rchild = &t3;
	t2.lchild = &t4;
	t3.lchild = &t5;
	
	//中序遍历
	inOrder(&t1);

	cout << endl;

	inOrder2(&t1);

	system("pause");
	return 0;
}


