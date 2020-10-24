/*
Title- Write a C program which accept two strings from user and append second string after first string.
Eg:
Input String:
India Country
Output String:
IndiaCountry
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h> 
void main()
{
    char str1[200],str2[100];
    int i,j;
    printf("enter the string1: ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the string2: ");
    fgets(str2,sizeof(str1),stdin);
    for(i=0;str1[i]!='\0';i++);
    i--;
    if(str1[i]==10)
    {
        i--;
    }
    for(j=0;str2[j]!='\0';i++,j++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("\nfinal string is: %s\n",str1);
}  
