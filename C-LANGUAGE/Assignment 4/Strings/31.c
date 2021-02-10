/*
Title-Write a C program which accept string from user and check whether string is palindrome or not.
Eg:
Input String:
level
Output String:
String is palindrome.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    char str[100];
    int i=0,j,flag=0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        i++;
    }
    i--;
    if(str[i]==10)
    {
        i--;
    }
    for(j=0;j<=i;j++,i--)
    {
//      -------------------- CHECKING STRTING AND ENDING CHARACTERS OF STRINGS ---------------
        if(str[j]!=str[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("string is palindrome\n");
    }
    else
    {
        printf("string is not palindrome\n");
    }
    
}
