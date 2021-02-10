
 
/*
Title- 1. constant pointer to local variable.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
	const int a=10;
	int b=20;
	int* const p=&a;
	p=&b; //it is not possible because here, p is a constant
	printf("%d\t%d\n",a,*p);
}
