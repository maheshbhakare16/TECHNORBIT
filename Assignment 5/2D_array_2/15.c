
/*
Title-15. Write a C program to check whether given matrix is equal or not
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],r1,c1,r2,c2,i,j,c[10][10],flag=0;
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
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("Matrices are not same \n");
        }
        else
        {
            printf("Matrices are same \n");
        }
    }
    else
    {
        printf("Matrices are not same \n");
    }
    
}
    
   
 
 
