


/*
Title- 1. Write a c program which accepts values in 2d array and print it in matrix form.
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
