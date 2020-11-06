
/*
Title- 2. Write a C Program to Read a Matrix and find Sum of all elements
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/ 
#include<stdio.h>
void main()
{
    int a[10][10],i,j,r1,c1,sum=0;
    printf("How many rows do you want to take in array 1: ");
    scanf("%d",&r1);
    printf("How many columns do you want to take in array 1: ");
    scanf("%d",&c1);
    if(r1<=10 && c1<=10)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
            sum+=a[i][j];  
            }
        }
        printf("sum of elements in matrix is: %d\n",sum);
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
}
