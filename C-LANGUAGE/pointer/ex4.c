
 
/*
Title- 1. pointer to constant value.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
	const int a=10;
	int b=20;
	int const* p=&a;
	(*p)++; // it is not possible because p is pointing to address whose value is constant
	printf("%d\t%d\n",a,*p);
}
