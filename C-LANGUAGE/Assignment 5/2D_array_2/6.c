
/*
Title- 6. Write a C program to accept a matrix and print diagonal elements
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,n;
    printf("How many rows & cloumns do you want to take in array: ");
    scanf("%d",&n);
   
    if(n<=10)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Digonal elements are: [");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    printf("%d , ",a[i][j]);
                }
            }
        }
        printf("]\n");
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
    
}
 
 
