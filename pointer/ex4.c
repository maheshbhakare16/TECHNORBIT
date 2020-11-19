#include<stdio.h>
void main()
{
	const int a=10;
	int b=20;
	int const* p=&a;
	(*p)++; // it is not possible because p is pointing to address whose value is constant
	printf("%d\t%d\n",a,*p);
}
