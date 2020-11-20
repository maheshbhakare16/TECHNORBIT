/*
Title- Write a C program which accept sentence from user and print number of white spaces from that
sentence.
Eg:
Input String:
India is my country
Output:
3
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    char str[100];
    int i,count=0;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]==32)
        {
            count++;
        }
    }
    printf("no. of white spaces are: %d\n",count);
}
  
