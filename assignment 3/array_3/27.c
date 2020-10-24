/*
Title- Write a C program which accept two strings from user and compare two strings without case
sensitivity. If both strings are equal then return 0 otherwise return difference between first mismatch
character.
Eg:
Input String1:
india Is mY cOuntry
Input String2:
INDIA is MY countrY
Output:
Both strings are equal.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    int i,flag=0;
    printf("enter the string 1: ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the string2: ");
    fgets(str2,sizeof(str2),stdin);
    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if((str1[i]>=97 && str1[i]<=122) && (str2[i]>=65 && str2[i]<=90))
        {
            if((str1[i]-32)!=str2[i])
            {
                flag=1;
                break;
            }
        }
        else
        {
            if((str2[i]>=97 && str2[i]<=122) && (str1[i]>=65 && str1[i]<=90))
            {
                if(str1[i]!=(str2[i]-32))
                {
                    flag=1;
                    break;
                }
            }
            else
            {
               if(str1[i]!=str2[i])
                {
                    flag=1;
                    break;
                } 
            }
        }
    }
    if(flag==0)
    {
        printf("0\n");
    }
    else
    {
        printf("difference is: \nstr1[%d]=%c\nstr2[%d]=%c\n",i+1,str1[i],i+1,str2[i]);
    }
}
