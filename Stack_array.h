#ifndef _Stack_H_
#define _Stack_H_

struct StackRecord;	
typedef struct StackRecord *Stack;
typedef int ElementType;

int isEmpty(Stack S);
int isFull(Stack S);
Stack CreateStack(Stack S);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(Stack S);
ElementType Top(Stack S);
void Pop(Stack S);
ElementType TopAndPop(Stack S);
	
#endif
