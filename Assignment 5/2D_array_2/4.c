
/*
Title- 4. Write a C Program to find Sum of all elements of each row of a matrix.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r,c,sum;
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
        for(i=0;i<r;i++)
        {
            sum=0;
            for(j=0;j<c;j++)
            {
                sum+=a[i][j];
            }
            printf("Addition of elements in row %d is: %d\n",i+1,sum);
        }
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
} 
