/*
Title- Write a C program to count number of alphabates, spaces and words in given string.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    char str[100];
    int j,i,space=0,alpha=0,word=0;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
//     logic to count spaces and alphabets
    for(j=0;str[j]!='\0';j++)
    {
        if(str[j]==32)
        {
            space++;
        }
        else
        {
            if((str[j]>=65 && str[j]<=90) || (str[j]>=97 && str[j]<=122))
            {
                alpha++;
            }
        }
    }
//    ----------------- LOGIC TO COUNT WORDS IN STRING -----------
    i=0;
    l1:
    while(str[i]!='\0')
    {
        if(str[i]==32)
        {
            i++;
            continue;
        }
        else
        {
            word++;
            break;
        }
    }
    while(str[i]!='\0')
    {
        if(str[i]!=32 && str[i]!='\n' && str[i]!='\0')
        {
            i++;
            continue;
        }
        else
        {
            if(str[i]=='\n' || str[i]=='\0')
            {
                break;
            }
            else
            {
                goto l1;
            }
        }
    }
    printf("spaces = %d\nAlphabets = %d\nwords = %d\n",space,alpha,word);
}
