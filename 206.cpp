#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A,N;
	cin >> A >> N;
	int  num_N=0;
	long long sum_all =0 ;
	for(int i = 0; i != N; ++i)
		{
			num_N = num_N*10 + A;
			sum_all += num_N;
			
		}
	cout << sum_all;

}
