/*
Title- Write a C program which toggles the case of a string.
Eg:
Input String:
technOrbit Infosystems
Output String:
TECHNoRBIT iNFOSYSTEMS
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Toggle String is: ");
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            printf("%c",str[i]+32);
        }
        else
        {
            if(str[i]>=97 && str[i]<=122)
            {
                printf("%c",str[i]-32);
            }
            else
            {
                printf("%c",str[i]);
            }
            
        }
    }
    
}
 
