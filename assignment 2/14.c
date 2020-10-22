/*
Title- 14. Write a C program to calculate sum of digits of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
 int n,sum=0;
 printf("enter the number: ");
 scanf("%d",&n);
 while(n!=0)
 {
  sum+=(n%10);
  n=n/10;
 }
 printf("sum is: %d\n",sum);
}
