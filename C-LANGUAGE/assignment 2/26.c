/*
Title- 26. Write a C program to check whether a number is Prime number or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int n,i=2;
 printf("enter the number to check whether it is prime or not: ");
 scanf("%d",&n);
 if(n==1)
     {
         printf("%d is not a prime number.\n",n);
     }
 while(i<=n)
 {
     
     if(n%i==0)
     {
         if(n==i)
         {
          printf("%d is a prime number.\n",n);   
         }
         else
         {
             printf("%d is not a prime number.\n",n);
             break;
         }
     }
     i++;
 }
}
