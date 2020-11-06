
/*
Title- 3. Write a C Program to Read a Matrix and find Product of all elements.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r,c,mult=1;
    printf("How many rows do you want to take in array: ");
    scanf("%d",&r);
    printf("How many columns do you want to take in array: ");
    scanf("%d",&c);
    if(r<=10&&c<=10)
    {
        printf("Enter the elements: \n");
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
                mult*=a[i][j];
            }
        }
        printf("multiplication of elements is: %d\n",mult);
    }
    else
    {
        printf("enter the elements less than 10\n");
    }
}
