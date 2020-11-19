/*
Title- Write a C program to print all fibonacci series upto each ASCII code of aphabates in given string.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    char str[100];
    int i,j,k,x;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(k=0;str[k]!='\0';k++)
    {
        if((str[k]>=65 && str[k]<=90) || (str[k]>=97 && str[k]<=122))
        {
            j=1;
            i=0;
            printf("%d=[",str[k]);
            while(i<=str[k])
            {
                printf("%d, ",i);
                x=i;
                i=i+j;
                j=x;
                
 
            }
            printf("]\n");
        }
    }
    
}
