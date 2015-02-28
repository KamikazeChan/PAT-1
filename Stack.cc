#include"Stack.h"
#include<iostream>

using namespace std;
struct node{
	ElementType Element;
	PtrToNode Next;
};

int 
isEmpty(Stack S)
{
	return S->Next == NULL;
}

Stack
CreateStack()
{
	Stack S;
	S =(struct node*) malloc(sizeof(struct node));
	if(S == NULL)
		cout << " Out of Space" << endl;
	S->Next = NULL;
	MakeEmpty(S);
	return S;
}

void 
MakeEmpty(Stack S)
{
	if(S==NULL)
		cout << " Must use CreateStack first"<<endl;
	else
//		while(S!=NULL)
		while(!isEmpty(S))
			Pop(S);
}

void
Push(ElementType X, Stack S)
{
	PtrToNode TmpCell;
	TmpCell = (struct node*)malloc(sizeof(struct node));
	if(TmpCell==NULL)
		cout << " Out of Space!" <<endl;
	else{
		TmpCell->Element = X;
		TmpCell->Next = S->Next;
		S->Next = TmpCell;
	}
}

ElementType
Top(Stack S)
{
	if(! isEmpty(S))
		return S->Next->Element;
	cout << " Empty Stack" <<endl;
	return 0;		//return value used to avoid warning
}

void
Pop(Stack S)
{
	Stack FirstCell;
	if(isEmpty(S))
		cout << " Empty Stack" <<endl;
	else{
		FirstCell = S->Next;
		S->Next = S->Next->Next;
		free(FirstCell);
	}
}
