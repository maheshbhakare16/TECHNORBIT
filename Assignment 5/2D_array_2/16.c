
/*
Title- 16. Write a C program to check whether given matrix is sparse or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int matrix[10][10],i,j,r,c,zeroc=0,nzeroc=0;
    printf("how many rows do you want to enter in matrix: ");
    scanf("%d",&r);
    printf("how many columns do you want to enter in matrix: ");
    scanf("%d",&c);
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    zeroc++;
                }
                else
                {
                    nzeroc++;
                }
            }  
        }
        if(zeroc>nzeroc)
        {
            printf("Matrix is a sparse matrix \n");
        }
        else
        {
            printf("Matrix is not a sparse matrix \n");
        }
    }
    else
    {
        printf("Please enter the rows and colum less than 10\n");
    }
}
    
 
