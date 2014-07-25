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
	char ss[100000];
	string s;
	if(N)
	{	
	for(int i=N; i != 0; --i)
		{
			sprintf(ss,"%d",tmp_sum%10);
			s = ss;
			sum_s = s + sum_s;
			tmp_sum = tmp_sum/10;
			all_sum -= A; 
			tmp_sum += all_sum;
		}
	cout << sum_s;
	}
	else
	cout << 0;
}

