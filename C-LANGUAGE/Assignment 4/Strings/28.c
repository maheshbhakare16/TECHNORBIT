/*
Title- Write a C program which accept string from user and then reverse the string till first N characters
without taking another string.
Eg:
Input String:
India is my country
Input of N:
8
Output :
m si aidnIy country
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    char str[100],temp;
    int i,n,count;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("enter the number: ");
    scanf("%d",&n);
    
    
// to count n characters in string
    for(i=0;count<n;i++)
    {
        if(str[i]!=32)
        {
            count++;
        }
    }
    printf("%d\n",i);
    i--;
// to reverse string upto count
    for(count=0;count<=i;count++,i--)
    {
        temp=str[i];
        str[i]=str[count];
        str[count]=temp;
    }
        
    printf("final string is: %s",str);
    
}
