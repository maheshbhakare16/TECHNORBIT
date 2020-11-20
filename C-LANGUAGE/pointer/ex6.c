#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int const* const p=&a;
	(*p)++; // it is not possible because p is pointing to address whose value is constant
	p=&b; //it is not possible because here, p is a constant
	printf("%d\t%d\n",a,*p);
}
