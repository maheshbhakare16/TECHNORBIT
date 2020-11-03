/*
Title- Write a C program to check whether given strings are Anagram strings or not.
Eg:
Input String1:
abccd
Input String2:cbcda
Output String: Strings are anagram
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    char str1[100],str2[100],temp;
    int i,j,flag=0;
    printf("enter the 1st string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the 2nd string: ");
    fgets(str2,sizeof(str2),stdin);
//     sorting of string1
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=i+1;str1[j]!='\0';j++)
        {
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
//     sorting string2
    for(i=0;str2[i]!='\0';i++)
    {
        for(j=i+1;str2[j]!='\0';j++)
        {
            if(str2[i]>str2[j])
            {
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
//     checking string are equals or not
    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("string is Anagram.\n");
    }
    else
    {
        printf("string is not Anagram.\n");
    }
}
