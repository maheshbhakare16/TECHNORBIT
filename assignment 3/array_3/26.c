/*
Title- Write a C program which accept two strings from user and compare only first N characters of two
strings. If both strings are equal till first N characters then return 0 otherwise return difference
between first mismatch character.
Eg:
Input String1:
Ramayan
Input String2:
Ramanacharya
Input of N:
4
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
    int i,j,n,flag=0;
    printf("enter the string1: ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the string2: ");
    fgets(str2,sizeof(str2),stdin);
    printf("enter upto how many characters you want to check strings: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("0\n");
    }
    else
    {
        printf("difference is: \n str1[%d] = %c \n str2[%d] = %c\n",i,str1[i],i,str2[i]);
    }
}
