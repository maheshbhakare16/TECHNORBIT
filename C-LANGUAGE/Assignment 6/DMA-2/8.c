/*
Title- 8. Write a C program to check whether given string is pallindrome or not using Dynamic memory
allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char* str;
    char c;
    int len=1,flag=0,i,j;
    str=(char*)malloc(sizeof(char));
    printf("Enter the string: ");
    do
    {
        scanf("%c",&c);
        if(c!='\n')
        {
            len++;
            str=(char*)realloc(str,len*sizeof(char));
            *(str+(len-2))=c;
            *(str+(len-1))='\0';  
        }  
    }while(c!='\n');
    for(i=0;*(str+i)!='\0' && *(str+i)!='\n';i++);
    i--;
    for(j=0;j<=i;j++,i--)
    {
        if(*(str+i)!=*(str+j))
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("string is palindrome..\n");
    }
    else
    {
        printf("string is not palindrome..\n");
    }
    free(str);
    str=NULL;
}

