/*
Title- 1. Write a C program to print all natural numbers from 1 to n. - using while loop
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>

void main()
{
 int i=1,num;
 printf("Enter the Number: ");
 scanf("%d",&num);
 while(i<=num)
 {
     printf("%d\t",i);
     i++;
 }
 printf("\n");
    
}
