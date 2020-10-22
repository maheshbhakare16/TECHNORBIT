/*
Title- 25. Write a C program to find LCM of two numbers.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
 int n1,n2,i=1;
 printf("enter 1st number: ");
 scanf("%d",&n1);
 printf("enter 2nd number: ");
 scanf("%d",&n2);
 while(1)
 {
  if(i%n1==0 && i%n2==0)
  {
   break;   
  }
  i++;
 }
 printf("LCM of %d and %d is: %d\n",n1,n2,i);    
}
