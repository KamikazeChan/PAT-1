#include"Stack.cc"
#include<iostream>
int main(){
	Stack S = CreateStack();
	int X;
	for (int i = 0; i != 3; ++i)
	{
		cin >> X;
		Push(X,S);
	}
	cout <<"Pop the element:" <<endl;
	for(int i = 0; i != 3; ++i)
	{
		cout << Top(S) <<endl;
		Pop(S);
	}
}
