#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct node)

typedef struct node{
	int s;
	struct node *next;
	}Node;

Node *create()
{
	Node *p1,*p2,*pHead;
	pHead = NULL;
	p1=p2=(Node *)malloc(LEN);
	scanf("%d",&(p1->s));
	while(p1->s!=-1)
	{
		if(pHead==NULL)
			pHead = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (Node *)malloc(LEN);
		scanf("%d",&(p1->s));
	}
	p1->next = NULL;
	return pHead;
}

Node *find_inter(Node *pHead1, Node *pHead2)
{	
	Node *pNew1,*pNew2,*pHead;
	pHead = NULL;
	pNew1 =pNew2 = (Node *)malloc(LEN);

	if(pHead1==NULL|pHead2==NULL)
		return pHead;
	
	for(Node *p1=pHead1 ;p1!=NULL;p1 = p1->next )
		for(Node *p2=pHead2;p2!=NULL; p2=p2->next)
		{
			if(p1->s==p2->s)
			{	
				if(pHead==NULL)
					pHead = pNew1;
				else
					pNew2->next = pNew1;
				pNew2 = pNew1;
				pNew2->s = p1->s;
				pNew1 =(Node*)malloc(LEN);
			} 
			
		}
	pNew2->next=NULL;
	return pHead;
}

void Print(Node *p)
{
	if(p==NULL)
		{
		printf("NULL");
		return;
		}
	while(p!=NULL)
	{
	if(p->next!=NULL)
	printf("%d ",p->s);
	else
	printf("%d",p->s);
	p = p->next;
	}

}

int main()
{
	Node *pA,*pB,*pEqual;
	pA=create();
	pB=create();
	pEqual=find_inter(pA,pB);
	Print(pEqual);
	return 0;
	
}
