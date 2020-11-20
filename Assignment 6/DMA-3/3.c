/*
Title- 3. Write a C program to find out a multiplication
matrix.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **p=NULL, **q=NULL, **r=NULL;
    int i,j,r1,c1,r2,c2,k;
    printf("enter no. of rows you want to enter into the array1: ");
    scanf("%d",&r1);
    printf("enter no. of columns you want to enter into the array1: ");
    scanf("%d",&c1);
    printf("enter no. of rows you want to enter into the array2: ");
    scanf("%d",&r2);
    printf("enter no. of columns you want to enter into the array2: ");
    scanf("%d",&c2);
    if(c1==r2)
    {
        
//         ----creating matrix 1 and adding elements in it ----
        p=(int**)malloc(r1*sizeof(int*));
        for(i=0;i<r1;i++)
        {
            *(p+i)=(int*)malloc(c1*sizeof(int));
        }
        printf("Enter the elements in the array1: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",(*(p+i)+j));
            }
        }
//     --------- creating matrix 2 and adding elements in it ----
         q=(int**)malloc(r2*sizeof(int*));
        for(i=0;i<r2;i++)
        {
            *(q+i)=(int*)malloc(c2*sizeof(int));
        }
        printf("Enter the elements in the array2: \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",(*(q+i)+j));
            }
        }
//       -----  creating matrix 3 to store multiplication of 2 matrices -----
        r=(int**)malloc(r1*sizeof(int*));
        for(i=0;i<r1;i++)
        {
            *(r+i)=(int*)calloc(sizeof(int),c2);
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    (*(*(r+i)+j))+=(*(*(p+i)+k)) * (*(*(q+k)+j));
                }
            }
        }
        printf("Multiplication matrix is: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",*(*(r+i)+j));
            }
            printf("\n");
        }
        free(p);
        free(q);
        free(r);
        p=q=r=NULL;
        
    }
    else
    {
        printf("Please enter proper matrix sizes....\n");
    }
    
    
}
