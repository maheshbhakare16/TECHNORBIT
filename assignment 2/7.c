/*
Title- 7. Write a C program to find sum of all even numbers between 1 to n
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
while(n>=1)
{
 if(n%2==0)
 {
     sum+=n;
 }
 n--;
}
   printf("sum is: %d\n",sum); 
}

