
/*
Title- 7. Write a C program to fidn multiplication matrix of two matrices.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],r1,c1,r2,c2,i,j,k,c[10][10],flag=0;
    printf("enter the no. of rows in 1st array: ");
    scanf("%d",&r1);
    printf("enter the no. of columns in 1st array: ");
    scanf("%d",&c1);
    printf("enter the elements: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the no. of rows in 2nd array: ");
    scanf("%d",&r2);
    printf("enter the no. of columns in 2nd array: ");
    scanf("%d",&c2);
    printf("enter the elements: \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(r1<=10 && c1<=10 && r2<=10 && c2<=10)
    {
        if(c1==r2)
        {
            for(k=0;k<r1;k++)
            {
                for(i=0;i<c2;i++)
                {
                    c[k][i]=0;
                    for(j=0;j<c1;j++)
                    {
                        c[k][i]+=a[k][j]*b[j][i];
                    }
                }
            }
            printf("Multiplication of two matrices is: \n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                {
                    printf("%d\t",c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Invalid sizes of matrices for multiplication\n");
        }
    }
    else
    {
        printf("please enter sizes of matrix less than 10\n");
    }
    
    
}
    
   
 
 

