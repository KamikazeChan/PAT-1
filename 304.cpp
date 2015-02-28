/*
*sum and product of two polynomial
*by zhoudaxia
*see pat.zju.edu.cn/contests/ds/3-04
*输入：两行，每行先给出多项式非零项的个数，再以指数递减方式输入一个
*多项式非零项的系数和指数
*输出:输出分两行，分别以指数递减方式输出乘积多项式以及和多项式的系数和指数
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int N1,N2;
	int index_zero=0;
	scanf("%d",&N1);
	int p1[N1],e1[N1];
	for(int i =0; i != 2*N1; ++i)
		if(i%2)
		scanf("%d",e1+i/2);
		else
		scanf("%d",p1+i/2);
	
	scanf("%d",&N2);		
	int p2[N2],e2[N2];
	for(int i =0; i != 2*N2; ++i)
		if(i%2)
		scanf("%d",e2+i/2);
		else
		scanf("%d",p2+i/2);
	
	int sum_poly[N1+N2];
	int i,j;
	for(i =0,j=0; i != N1 || j != N2;){
		if(j == N2){
			if(i==0&&j==0)
			printf("%d %d",*(p1+i),*(e1+i));
			else
			printf(" %d %d",*(p1+i),*(e1+i));
			++i;
		}
		else if(i == N1){
			if(i==0&&j==0)
			printf("%d %d",*(p2+j),*(e2+j));
			else
			printf(" %d %d",*(p2+j),*(e2+j));
			++j;
		}
		else{
			if(*(e1+i) < *(e2+j)){
				if(i==0&&j==0)
				printf("%d %d",*(p2+j),*(e2+j));
				else
				printf(" %d %d",*(p2+j),*(e2+j));
				++j;}
			else if(*(e1+i)>*(e2+j)){
				if(i==0&&j==0)
				printf("%d %d",*(p1+i),*(e1+i));
				else
				printf(" %d %d",*(p1+i),*(e1+i));
				++i;
				}
				else{
				if((*(p1+i)+*(p2+j))!=0){
				if(i==0&&j==0)
				printf("%d %d",*(p1+i)+*(p2+j),*(e1+i));
				else
				printf(" %d %d",*(p1+i)+*(p2+j),*(e1+i));
				index_zero =1;}
				else{
				if(i==0&&j==0)
				;
				else{
				if(index_zero==0)
				printf("0 0");
				else
				printf(" 0 0");}
				}
				++i;
				++j;
				}	
 
		}
	}
}
