
/*
Title- 13. Write a C program to check whether given matrix is Identity or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int matrix[10][10],i,j,r,c,flag=0;
    printf("How many rows do you want to enter in matrix: ");
    scanf("%d",&r);
    printf("How many columns do you want to enter in matrix: ");
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
                if(i==j)
                {
                    if(matrix[i][j]!=1)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(matrix[i][j]!=0)
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
            printf("Matrix is not an identity matrix \n");
        }
        else
        {
            printf("Matrix is an identity matrix \n");
        }
    }
    else
    {
        printf("Please enter the proper no. of columns and rows\n");
    }
}
 
