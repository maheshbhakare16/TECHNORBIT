


/*
Title- 1. Write a C program to read and print a RXC matrix, R and C must be given by user.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    int i,j,m,n,a[10][10];
    printf("enter the no. of rows: ");
    scanf("%d",&m);
    printf("enter the no. of columns: ");
    scanf("%d",&n);
    printf("enter the elements: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Your matrix is: \n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
