/*
Title- Write a C program which accepts a string from user which contains a characters from ‘b’ to ‘y’.
Eg:
Input String: mn jn kn kazfd
Output String: mn jn kn k
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("output string: ");
    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]>97 && str[i]<122 || str[i]==32)
       {
           printf("%c",str[i]);
       }
    } 
    printf("\n");
}
