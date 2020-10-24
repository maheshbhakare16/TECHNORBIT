

/*
Title- Write a C program to accept string with multiple spaces from user and print as it is.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Accepted string is: %s\n",str);
}
