#include<stdio.h>
#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	int tt;
	clock_t start_time = clock();
	for(int i =0 ; i !=100000; ++i)
		cout << i;
	clock_t end_time = clock();
	printf( "Running time is: %2.8f ms/per",static_cast<double>(end_time-start_time)/CLOCKS_PER_SEC );
	scanf("%d",&tt);
	clock_t start_time_c = clock();
	for(int j =0; j!=100000; ++j)
		printf("%d",j);
	clock_t end_time_c = clock();
	printf("Running time of c is: %2.8f ms/per", static_cast<double>(end_time_c-start_time_c)/CLOCKS_PER_SEC);
	return 0; 	
}
