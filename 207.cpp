#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int cout_num(long N, int i);
int main()
{

	long N;
	long tmp_N;
	cin >> N;
	tmp_N = N;
	cout << N <<'=';
	if(N==1)
	cout << 1;
	else
	{
	for(long i = 2; i <= N; )
		{	int count_N;
			if(N%i==0)
			{
			count_N = cout_num(N,i);
			cout << i;
			if(count_N>1)
				cout <<'^'<< count_N;
			for(int j = 0; j!= count_N; ++j)
				tmp_N = tmp_N/i;
			if(tmp_N!=1)
				cout << '*';
			N = tmp_N;
			}
			else
			++i;

		}
	}
}

int cout_num(long N, int i)
{
	int cout_i = 0;
	while(N%i == 0)
	{
	cout_i += 1;
	N = N/i;
	}
	return cout_i;
}
