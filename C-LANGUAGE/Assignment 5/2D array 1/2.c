
/*
Title- 2. Write a c program to make a addition of two matrices using 2d array.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
    int i,j,m1,n1,m2,n2,a[10][10],b[10][10],c[10][10];
    printf("enter the no. of rows in 1st array: ");
    scanf("%d",&m1);
    printf("enter the no. of columns in 1st array: ");
    scanf("%d",&n1);
    printf("enter the elements: \n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the no. of rows in 2nd array: ");
    scanf("%d",&m2);
    printf("enter the no. of columns in 2nd array: ");
    scanf("%d",&n2);
    printf("enter the elements: \n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(m1==m2 && n1==n2)
    {
       for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
    
        printf("Addition of two matrices is: \n\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("enter the proper array sizes...\n");
    }
}
    
   
 
