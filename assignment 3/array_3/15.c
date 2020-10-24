/*
Title- Write a C program which accept sentence from user and print last word from that sentence.
Eg:
Input String:
India is my country
Output String:
country
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
    for(i=0;str[i]!='\0';i++);
    i--;
    if(str[i]==10)
    {
        i--;
    }
    while(str[i]==32)
    {
        i--;
    }
    while(str[i]!=32 && i!=-1)
    {
        i--;
    }
    i++;
    for(i;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
} 
