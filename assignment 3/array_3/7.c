/*
Title- Write a C program to replace space with ‘$’ in given string.
Eg:
Input String:
India is my country
Output String:
India$is$my$coutry
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
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
            str[i]='$';
        }
    }
    printf("Output string: %s\n",str);
}

