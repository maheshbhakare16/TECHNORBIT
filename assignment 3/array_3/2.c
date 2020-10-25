
/*
Title- Write a C program to accept string with multiple spaces from user and print it with a sinlge space as
a delimiter.
Eg:
Input String:
_____India_____is_my_________country___________________
Output String:
India_is_my_country
(Consider _ as space)
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
 

#include<stdio.h>
void main()
{
    char str[100];
    int i=0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    i=0;
    printf("string with removed spaces is: ");
    while(str[i]!='\0')
    {
        if(str[i]==32)
        {
            i++;
            continue;
        }
        else
        {
            break;
        }
    }
    while(str[i]!='\0')
    {
        if(str[i]==32 && str[i+1]==32 || str[i]==32 && str[i+1]==10 || str[i]==32 && str[i+1]=='\0' )
        {
            i++;
            continue;
        }
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
