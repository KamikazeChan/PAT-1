/*
*gcc选项中可以使用-std=c99来支持c99标准
*传统的c语言时不支持变长数组功能的，就是说数组的长度在编译器
*就已经确定下来了，不能在运行时改变。
*但是在c99标准中，新增的一项功能就是允许c语言总使用变长数组
*变长数组不能用static或是extern修饰
*不能作为结构体或是联合的成员，只能以独立的数组形式存在
*/
#include<stdlib.h>
#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	for(int i = 0; i != 5; ++i)
		printf("%d ",*(a+i));
	printf("\n");
	printf("size of a: %d\n",sizeof(a));
	
	int n;
	scanf("%d",&n);
	int b[n];
	printf("size of b: %d\n",sizeof(b));
	for(int i = 0; i != n; ++i)
		scanf("%d",b+i);
	printf("new size of b: %d\n",sizeof(b));
	for(int i = 0; i != n; ++i)
		printf("%d ",*(b+i));
}
