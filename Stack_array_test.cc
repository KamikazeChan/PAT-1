#include "Stack_array.cc"
using namespace std;

int main(){
	int MaxElements;
	int X;
	cout << "Please input the max size:"<<endl;
	cin >> MaxElements;	
	Stack S;
	S = CreateStack(MaxElements);
	for(int i =0; i != MaxElements; i++)
	{
		cin >> X;
		Push(X,S);
	}
	for(int i=0; i != MaxElements; i++)
		cout << TopAndPop(S)<<endl;
	
}
