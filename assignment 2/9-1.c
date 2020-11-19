/*
Title- 1. Write a C program to print all natural numbers from 1 to n. - using while loop
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int n,i=1;
    printf("enter the number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        int j=1;
        while(j<=10)
        {
            printf("%d\t",i*j);
            j++;
        }
        printf("\n");
        i++;
    }
    
}
