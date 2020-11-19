/*
Title- 36. Write a C program to print Fibonacci series up to n terms.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int num,i=0,j=1,k;
 printf("enter the number: ");
 scanf("%d",&num);
 if(num>0)
 {
 printf("%d\t",0);
 }
 while(num>1)
 {
     k=i;
     i=i+j;
     printf("%d\t",i);
     j=k;
     num--;
 
 }
 printf("\n");
}
