//Intersection of two sorted list
#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct node)

typedef struct node{
	int s;
	struct node* next;
}Node;

Node* create()
{
	Node *p1,*p2,*pHead;
	pHead = NULL;
	p1 = p2 = (Node *)malloc(LEN);
	scanf("%d",&(p1->s));
	while((p1->s)!=-1){
		if(pHead == NULL)
			pHead = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (Node *)malloc(LEN);
		scanf("%d",&(p1->s));
	}
	p1->next = NULL;
	if(pHead==NULL)
	return p1;
	else
	return pHead;
	
}

//Do not need to save the intersection into a new pointer
void find_inter(Node *pHead1, Node *pHead2)
{
	int a=0;
	if(pHead1->next == NULL|pHead2->next == NULL){
		printf("NULL");
		return;
	}
	for(Node *p1 = pHead1; p1!= NULL; p1 = p1->next)
		for(Node *p2 = pHead2; p2!= NULL; p2 = p2->next)
			if(p1->s == p2->s)
			{
			if(a==0)
			printf("%d",p1->s);
			else
			printf(" %d",p1->s);
			++a;	}
	if(!a)
	printf("NULL");	

}

int main()
{
	Node *p1,*p2;
	p1=create();
	p2=create();
	find_inter(p1,p2);
}
