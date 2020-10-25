/*
Title- Write a C program which accept sentence from user and position from user and print the word at
that position.
Eg:
Input String:
India is my country
Input Position:
3
Output String:
my
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
 

#include<stdio.h>
void main()
{
    char str[100];
    int i,j,word=0,flag=0,n;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("enter the no. of word which you want to print from string: ");
    scanf("%d",&n);
    
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
    if(word==n)
    {
        printf("The word at %d position is: ",n);
        flag=1;
        while(str[i]!=32 && str[i]!=10&& str[i]!=0)
        {
            printf("%c",str[i]);
            i++;
        }
        goto l2;
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
    l2:
    if(flag==0)
    {
        printf("not enough words in sentence.");
    }
    printf("\n");
}
    
 
 
