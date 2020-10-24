/*
Title- Write a C program which accept string from user and accept number N then copy last N character
into some another string.
Eg:
Input String:
India is my country
Input of N:
5
Output String:
is my
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h> 
void main()
{
    char str1[100],str2[100];
    int i,n,j=0;
    printf("enter the string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;str1[i]!='\0';i++);
    i--;
    printf("%d\n",i);
    for(i=i-n;str1[i]!='\0';i++,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("final string is: %s\n",str2);
} 
