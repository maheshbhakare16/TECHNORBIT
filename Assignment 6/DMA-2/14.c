/*
Title- 14. Write a C program to store and display multiple(10) strings in one 1-dimensional array using
Dynamic memory allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char** p=NULL;
    int i,n,len;
    char ch;
    printf("How many strings you wants to enter: ");
    scanf("%d",&n);
    p=(char**)malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
    {
        *(p+i)=(char*)malloc(sizeof(char));
    }
    printf("Enter the strings: \n");
    for(i=0;i<n;i++)
    {
        *(*(p+i)+0)='\0';
        printf("Enter string %d: ",i+1);
        len=1;
        scanf(" ");
        do
        {
            scanf("%c",&ch);
            if(ch!='\n')
            {
                len++;
                *(p+i)=(char*)realloc(*(p+i) , len*sizeof(char));
                *(*(p+i)+(len-2))=ch;
                *(*(p+i)+(len-1))='\0';
            }
            
        }while(ch!='\n');  
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",(*(p+i)));
    }
    free(p);
    p=NULL;
}
