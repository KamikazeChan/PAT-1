#include"Stack_array.h"
#include<iostream>
#define EmptyTOS -1
#define MinStackSize 5
using namespace std;

struct StackRecord{
	int Capacity;
	int TopOfStack;
	ElementType *Array;
};

int
isEmpty(Stack S)
{
	return S->TopOfStack==EmptyTOS; 
}

/*
int
isFull(Stack S)
{

}
*/

Stack
CreateStack(int MaxElements)
{
	Stack S;
	
	if(MaxElements < MinStackSize)
		cout << "Stack size is too small" <<endl;
	
	S = (struct StackRecord *)malloc(sizeof(struct StackRecord));
	if(S == NULL)
		cout << "out of Space"<<endl;
	
	S->Array = (ElementType *)malloc(sizeof(ElementType)*MaxElements);
	
	if(S->Array==NULL)	
		cout << " Out of Space!!"<<endl;
	S->Capacity == MaxElements;
	
	MakeEmpty(S);

	return S;
}

void
DeposeStack(Stack S)
{
	if(S!=NULL){
		free(S->Array);
		free(S);
	}
}	

void 
MakeEmpty(Stack S)
{
	S->Capacity = EmptyTOS;
}

void
Push(ElementType X, Stack S)
{
	if(isFull(S))
		cout << "Stack is full"<<endl;
	else
		S->Array[++S->TopOfStack] = X;
}

ElementType
Top(Stack S)
{
	if(!isEmpty(S))
		return S->Array[S->TopOfStack];
	cout << "Stack is empty"<<endl;
	return 0;
}

void
Pop(Stack S)
{
	if(isEmpty(S))
		cout << " Empty Stack"<<endl;
	else
		S->TopOfStack--;
}

ElementType
TopAndPop(Stack S)
{
	if(!isEmpty(S))
		return S->Array[S->TopOfStack--];
	cout << " Stack is Empty"<<endl;
	return 0;
}

int
isFull(Stack S)
{
	int MaxSize;
	MaxSize = sizeof(S->Array)/sizeof(S->Array[0]);
	return MaxSize == S->Capacity;
}
