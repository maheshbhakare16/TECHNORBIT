/*
Title- 27. Write a C program to print all Prime numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h> 
void main()
{
 int n,j=1;
 printf("enter the number: ");
 scanf("%d",&n);
 while(j<=n)
 {
     int i=2;
     while(i<=j)
     {
         
         if(j%i==0)
         {
             if(j==i)
             {
                 printf("%d\t",j);
             }
             else
             {
                 break;
             }
         }
         i++;
     }
     j++;
 }
 printf("\n");
}
