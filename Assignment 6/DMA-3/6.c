/*
Title- 6. Write a C program to print 3X3 matrix of strings.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
#include<stdlib.h>
void main()
{
    char*** p=NULL;
    int i,j,len;
    char ch;
    p=(char***)malloc(r*sizeof(char*));
    for(i=0;i<3;i++)
    {
        *(p+i)=(char**)malloc(c*sizeof(char*));
    }
    printf("Enter the strings: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(*(p+i)+j)=(char*)malloc(sizeof(char));
            *(*(*(p+i)+j)+0)='\0';
            len=1;
            scanf(" ");
            do
            {
                scanf("%c",&ch);
                if(ch!='\n')
                {
                    len++;
                    *(*(p+i)+j)=(char*)realloc(*(*(p+i)+j),len+sizeof(char));
                    *(*(*(p+i)+j)+(len-2))=ch;
                    *(*(*(p+i)+j)+(len-1))='\0';
                }
            }while(ch!='\n');
        }
    }
    printf("Entered matrix of strings is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%s\t",(*(*(p+i)+j)));
        }
        printf("\n");
    }
    free(p);
    p=NULL;
}
