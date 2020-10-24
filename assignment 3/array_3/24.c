/*
Title- Write a C program which accept two strings from user and append N characters of second string
after first string.
Eg:
Input String:
India Country
Input of N:
4
Output String:
IndiaCoun
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h> 
void main()
{
    char str1[200],str2[100];
    int i,j,n;
    printf("enter the string1: ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the string2: ");
    fgets(str2,sizeof(str2),stdin);
    printf("enter how many characters of 2nd srting you want to add in 1st string: ");
    scanf("%d",&n);
    for(i=0;str1[i]!='\0';i++);
    if(str1[i-1]==10)
    {
        i--;
    }
    for(j=0;j<n;i++,j++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("\nfinal string is: %s\n",str1);
}  
