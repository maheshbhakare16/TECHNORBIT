/*
Title- 12. Write a C program to print like (using Dynamic memory allocation)
fun gun run
sun mun dun
bun hun kun
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    char*** p=NULL;
    int i,j,r,c,len;
    char ch;
    printf("Enter no. of rows you want: ");
    scanf("%d",&r);
    printf("Enter no. of columns you want: ");
    scanf("%d",&c);
    p=(char***)malloc(r*sizeof(char*));
    for(i=0;i<r;i++)
    {
        *(p+i)=(char**)malloc(c*sizeof(char*));
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
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
                    *(*(p+i)+j)=(char*)realloc(*(*(p+i)+j),len*sizeof(char));
                    *(*(*(p+i)+j)+(len-2))=ch;
                    *(*(*(p+i)+j)+(len-1))='\0';
                }
            }while(ch!='\n');
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%s\t",(*(*(p+i)+j)));
        }
        printf("\n");
    }
    free(p);
    p=NULL;
}
