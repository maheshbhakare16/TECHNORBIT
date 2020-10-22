/*
Title- 2. Write a C program to print all natural numbers in reverse (from n to 1). -using while loop
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>

void main()
{
 int n;
 printf("Enter the number: ");
 scanf("%d",&n);
 while(n>=1)
 {
     printf("%d\t",n);
     n--;
 }
 printf("\n");
}
