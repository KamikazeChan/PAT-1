#include<stdlib.h>
#include<stdio.h>

int main(){
//	char *s4,*s2,*s3;
	char s1[100],s2[100],s3[100];
	scanf("%s",s1);
	scanf("%s",s2);
	char c;
	c = getchar();
//	putchar('8');
//	putchar(c);
//	putchar('8');
	scanf("%s",s3);
	printf("%s%s%s",s1,s2,s3);
	putchar(c);
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d\n",a,b);
	int i=0;
	while(scanf("%d",&a))
		++i;
	printf("%d %d",i,a);
}

