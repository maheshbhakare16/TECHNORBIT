/*
Title- 15. Write a C program to calculate product of digits of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int n,mult=1;
 printf("enter the number: ");
 scanf("%d",&n);
 while(n!=0)
 {
     mult*=(n%10);
     n=n/10;
 }
 printf("multiplcation is: %d\n",mult);
}
