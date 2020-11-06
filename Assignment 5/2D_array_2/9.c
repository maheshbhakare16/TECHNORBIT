
/*
Title- 9. Write a C program to check whether given matrix is square or not
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c;
    printf("How many rows do you want to take in array: ");
    scanf("%d",&r);
    printf("How many columns do you want to take in array: ");
    scanf("%d",&c);
    printf("Enter the elements: \n");
    if(r<=10 && c<=10)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        if(r==c)
        {
            printf("given matrix is a square matrix \n");
        }
        else
        {
            printf("given matrix is not a square matrix \n");
        }
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
} 
 
