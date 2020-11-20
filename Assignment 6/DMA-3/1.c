/*
Title- 1. Write a C Program to Transpose a matrix.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int** p=NULL;
    int r,c,i,j;
    printf("Enter no. of rows you want in matrix: ");
    scanf("%d",&r);
    printf("Enter no. of columns you want in matrix: ");
    scanf("%d",&c);
    p=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
    {
        *(p+i)=(int*)malloc(c*sizeof(int));
    }
    printf("Enter elements in the matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
    printf("Original matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",(*(*(p+i)+j)));
        }
        printf("\n");
    }
    printf("Transformed matrix is: \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",(*(*(p+j)+i)));
        }
        printf("\n");
    }
    free(p);
    p=NULL;
}
