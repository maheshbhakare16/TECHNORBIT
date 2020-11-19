/*
Title- Write a C program to print count of number characters in given string.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    char str[100];
    int i,count=0;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            count++;
        }
    }
    printf("No. of numeric characters in above string are: %d\n",count);
    
}
