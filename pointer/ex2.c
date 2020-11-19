
//logically it is wrong
#include<stdio.h>
void main()
{
	const int a=10;
	int b=20;
	int* p=&a;
	(*p)++;
	printf("%d\t%d\n",a,*p);
}
