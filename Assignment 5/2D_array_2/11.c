
/*
Title- 11. Write a C program to check whether given matrix is upper traingular or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c,flag=0;
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
            for(j=0;j<c;j++)
            {
               if(j<i)
               {
                   if(a[i][j]!=0)
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
            printf("matrix is not upper triangular \n");
        }
        else
        {
            printf("matrix is upper triangular \n");
        }
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
}  
