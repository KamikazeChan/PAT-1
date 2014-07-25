#include <iostream>
#include <string>

using namespace std;

int main()
{
	int *p = NULL;
	int q = 20;
	p = &q;
	cout <<*p;
	return 0;
}

