/*
Title- 20. Write a C program to print all ASCII character with their values.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int i=0;
    printf("ascii characters of numbers are: \n");
    while(i<=255)
    {
        printf("%d = %c\n",i,i);
        i++;
    }
    printf("\n");
}
