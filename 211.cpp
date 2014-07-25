#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct node)
using namespace std;

typedef struct node
{
	int s;
	struct node *next;
}Node;

/*初始化非降序链表序列*/
void initList(Node *pNode)
{
	pNode = NULL;
}

Node *create()
{
	Node *pHead, *p1, *p2;
	//开辟一个LEN大小的空间，并让p1、p2指向它
	p2=p1=(Node *)malloc(LEN);
//	p2=p1= new Node();
	pHead = NULL;
	
	//创建链表节点并给节点的元素赋值
//	cin >> p1->s;
	scanf("%d",&(p1->s));
	while((p1->s)!=-1)
	{      
		if(pHead == NULL)
			pHead = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (Node *)malloc(LEN);
	//	p1 = new Node();
	//	cin >> p1->s;
		scanf("%d",&(p1->s));
	}
	p2->next = NULL;
	return pHead;

}

void Print(Node *pHead)
{
	Node *p;
	p = pHead;
	//,判断链表是否为空
	if(p == NULL)
	{
	//	cout << "NULL";
		printf("NULL");
		return;
	}
	else
	{
		while(p->next!= NULL)
			{
		//	cout << p->s<<' ';
			printf("%d ",p->s);
			p = p->next;
			}
		//cout <<p->s;
		printf("%d",p->s);
	}		
}

Node *Merge(Node *p1, Node *p2)
{
	Node *pNew;
	Node *pHead;
	if(p1==NULL&&p2==NULL)
		pHead = NULL;
	else
	{
		pHead =(Node *)malloc(LEN);
	//	pHead = new Node();
		pNew = pHead;
		if(p1==NULL)
			{
			pNew = p2;
			return pNew;}
		if(p2==NULL)
			{
			pNew = p1;
			return pNew;}
		while(p1!=NULL&&p2!=NULL)	{       
				if(p1->s<=p2->s)
				{
				pNew->next = p1;
				p1 = p1->next;
				pNew = pNew->next;
				}
				else
				{
				pNew->next = p2;
				p2 = p2->next;
				pNew = pNew->next;
				}
			}
		if(p1==NULL)
			do	{
				pNew->next = p2;
				p2 = p2->next;
				pNew = pNew->next;
				}while(p2!=NULL);
		else
			do	{
				pNew->next = p1;
				p1 = p1->next;
				pNew = pNew ->next;
				}while(p1!=NULL);
		
	}
	return pHead->next;
}

int main()
{
	Node *headA;
	Node *headB;
	Node *headM;
	headA = create();
	headB = create();
	if(headA==NULL&&headB==NULL)
	{
	cout <<"NULL";
	return 0;}
	else
	{
	headM = Merge(headA,headB);
	Print(headM);
	return 0;
	}
}

