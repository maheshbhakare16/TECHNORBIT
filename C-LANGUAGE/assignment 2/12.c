/*
Title- 12. Write a C program to find sum of first and last digit of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int n,first,last;
    printf("enter the number: ");
    scanf("%d",&n);
    last=n%10;
    while(n!=0)
    {
        first=n%10;
        n=n/10;
    }
    printf("sum of first and last digit is: %d\n",first+last);
}
