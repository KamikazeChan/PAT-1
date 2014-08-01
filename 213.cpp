/*
*median of two list
*by zhoudaxia
*see pat.zju.edu.cn/contests/ds/2-13
*输入两个链表的长度N，输入两个链表
*输出两个链表的并集的中位数
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct node)

typedef struct node{
	int s;
	struct node *next;
}Node;

Node* create(int N){
	Node *pHead,*p1,*p2;
	pHead = NULL;
	p1 = p2 = (Node *)malloc(LEN);
	for(int i = 0; i != N; ++i){
	scanf("%d",&(p1->s));
	if(pHead == NULL)
		pHead = p1;
	else
		p2->next = p1;
	p2 = p1;
	p1 = (Node *)malloc(LEN);
	}
	p2->next = NULL;
	return pHead;
}

void my_median(Node *p1, Node *p2, int N){
	int m[2*N];
	int i,j;
	for(i = 0,j = 0; (i!= N)&&(j!=N); ){
	if((p1->s < p2->s) && (i!=N)){
		*(m+i+j) = p1->s;
		p1 = p1->next;
		++i;
		}
	else if((p1->s > p2->s) && (j!=N)){
		*(m+i+j) = p2->s;
		p2 = p2->next;
		++j;
		}
	else {
		*(m+i+j) = p1->s;
		++i;
		*(m+i+j) = p1->s;
		++j;
		p1 = p1->next;
		p2 = p2->next;
		}
		
	}
	printf("%d",*(m+N-1));
}

int main()
{
	int N;
	scanf("%d",&N);
	Node *p1,*p2;
	p1=create(N);
	p2=create(N);
	my_median(p1,p2,N);
}
