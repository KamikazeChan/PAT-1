#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int N,A;
	cin >> A >>N;
	string sum_s;
	int tmp_sum = 0;
	int all_sum = 0;
	all_sum = N*A;
	tmp_sum = all_sum;
	int ss[1000000];
	if(N)
	{	
	for(int i=N; i != 0; --i)
		{
			ss[i-1] = tmp_sum%10;
			tmp_sum = tmp_sum/10;
			all_sum -= A; 
			tmp_sum += all_sum;
		}
	if(tmp_sum>0)
		cout << tmp_sum;
	for( int j=N; j != 0; --j)
		cout << ss[N-j];
	}
	else
	cout << 0;
}
