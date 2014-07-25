#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct node)

typedef struct node{
	int s;
	struct node *next;
}Node;

Node* create()
{
	Node *p1, *p2, *pHead;
	pHead = NULL;
	p1 = p2 = (Node *)malloc(LEN);
	scanf("%d",&(p1->s));
	while(p1->s != -1){
		if(pHead == NULL)
			pHead = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (Node *)malloc(LEN);
		scanf("%d", &(p1->s));
	}
	p1->next = NULL;
	if(pHead == NULL)
		return p1;
	else 
		return pHead;
}

void find_inter(Node *pHead1, Node *pHead2)
{
	int a = 0;
	Node *p1,*p2;
	if(pHead1->next == NULL | pHead2->next == NULL)
		{printf("NULL");
		return;
		}
	for(p1 = pHead1,p2 = pHead2; p1!= NULL&& p2!= NULL;){
		if(p1->s < p2->s)
			p1 = p1->next;
		else if(p1->s > p2->s)
			p2 = p2->next;
		else{
		if(!a)
			printf("%d",p1->s);
		else
			printf(" %d",p1->s);
		p1 = p1->next;
		p2 = p2->next;
		++a;
		}
	}
	if(!a)
	printf("NULL");
}

int main(){
	Node *pp1,*pp2;
	pp1 = create();
	pp2 = create();
	find_inter(pp1,pp2);
}
