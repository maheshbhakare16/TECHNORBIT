/*
Title- 6. Write a C program to represent 2-D array(Matrix) using Dynamic Memory Allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int** ptr=NULL;
    int c,r,i,j;
    printf("How many columns Do you want in matrix: ");
    scanf("%d",&c);
    printf("How many Rows Do you want in matrix: ");
    scanf("%d",&r);
    ptr=(int**)malloc(r*sizeof(int*));
    for(i=0;i<c;i++)
    {
        *(ptr+i)=(int*)malloc(c*sizeof(int));
    }
    printf("enter the elements in the matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
    printf("entered elements are: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    free(ptr);
    ptr=NULL;
}
