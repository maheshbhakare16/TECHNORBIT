/*
Title- 4. Write a C program to print diagonal elements in matrix using Dynamic memory allocation.
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
    printf("enter no. of rows you want in matrix: ");
    scanf("%d",&r);
    printf("Enter how many columns you want in matrix: ");
    scanf("%d",&c);
    p=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
    {
        *(p+i)=(int*)malloc(c*sizeof(int));
    }
    printf("enter the elements in matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
    printf("Diagobal elements are: [");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j==i)
            {
                printf("%d, ",*(*(p+i)+j));
            }
        }
    }
    printf("]\n");
    free(p);
    p=NULL;
}
