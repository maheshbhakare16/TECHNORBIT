/*
Title- Write a C program to accept string and print it in the reverse order.
Eg:
Input String:
India is my country
Output String:
yrtnuoc ym si aidnI.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++);
    i--;
    if(str[i]==10)
    {
        i--;
    }
    printf("Reverse string is:");
    for( ;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
