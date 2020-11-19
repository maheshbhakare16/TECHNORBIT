/*
Title- Write a program which accept string from user and copy first N charaters into some destination
string.
Eg:
Input String:
India is my country
Input of N:
8
Output String:
India is
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h> 
void main()
{
    char str1[100],str2[100];
    int i,n;
    printf("enter the string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the number upto which you want a string: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("final string is: %s\n",str2);
}
