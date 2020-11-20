/*
Title- 5. Write a C program to check whether matrix is upper
triangular matrix or not.
memory allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
#include<stdlib.h>

void main()
{
    int** p=NULL;
    int r,c,i,j,flag=0;
    printf("Enter the no. of rows you want: ");
    scanf("%d",&r);
    printf("Enter the no. of columns you want: ");
    scanf("%d",&c);
    p=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
    {
        *(p+i)=(int*)malloc(c*sizeof(int));
    }
    printf("Enter matrix elements: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j<i)
            {
                if(*(*(p+i)+j)!=0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("matrix is not upper triangular..\n");
    }
    else
    {
        printf("Matrix is upper Triangular...\n");
    }
    free(p);
    p=NULL;
}
