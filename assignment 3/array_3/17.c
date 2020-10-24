/*
Title- Write a C program to convert the string from upper case to lower case.
Eg:
Input String:
India Is My Country
Output String:
india is my country
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("String in lower case is: ");
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            printf("%c",str[i]+32);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    
}
