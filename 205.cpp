#include <iomanip>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	int N;
	vector<int> a;
	double sum_N = 0;
	double var_N = 0;
	double avg_N;
	cin>>N;
	for(int i = 0; i != N; ++i)
		{int b;
		cin >>b;
		a.push_back(b);
		sum_N += b;}	
	avg_N = sum_N/N;
	for(vector<int>::iterator iter = a.begin(); iter != a.end(); ++iter)
	{double c = (*iter - avg_N);
	var_N += (c*c);
	}
	cout <<setprecision(5)<<fixed<<sqrt(var_N/N) <<endl;
}

