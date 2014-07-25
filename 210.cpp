#include <iostream>

using namespace std;
int main()
{
	int D,P;
	cin >> D >> P;
	if(P == 3)
		cout << D-1;
	else
		cout << D -2 - (P-2)/2;
	
}
