/*
Title- Write a C program which accept sentence from user and print number of small letters, capital
letters, Spaces and digits from that sentence.
Eg:
Input String:
abcDE 5Glm1 O
Output String:
Small: 5
Capital: 4 Digits: 2
Spaces: 2.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/



#include<stdio.h>
void main()
{
    char str[100];
    int i,small=0,capital=0,digits=0,spaces=0;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]>=65 && str[i]<=90)
       {
           capital++;
       }
       else
       {
           if(str[i]>=97 && str[i]<=122)
           {
               small++;
           }
           else
           {
               if(str[i]>=48 && str[i]<=57)
               {
                   digits++;
               }
               else
               {
                   if(str[i]==32)
                   {
                       spaces++;
                   }
               }
           }
       }
    }
    printf("small= %d\ncapital=%d\ndigits=%d\nspaces=%d\n",small,capital,digits,spaces);
}
 
