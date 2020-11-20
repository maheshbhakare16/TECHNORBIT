#include<stdio.h>
void main()
{
	const int a=10;
	int b=20;
	int* const p=&a;
	p=&b; //it is not possible because here, p is a constant
	printf("%d\t%d\n",a,*p);
}
