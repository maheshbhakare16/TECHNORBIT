/*
Title- 4. Write a C program to check whether matrix is unit
matrix or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int** p=NULL;
    int i,j,rc,flag=0;
    printf("HOW many rows and colums you want in matrix: ");
    scanf("%d",&rc);
    p=(int**)malloc(rc*sizeof(int*));
    for(i=0;i<rc;i++)
    {
        *(p+i)=(int*)malloc(rc*sizeof(int));
    }
//     ---------- ACCEPTING MATRIX -------------------
    printf("Enter elements in matrix: \n");
    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
//    -------------- CHECKING MATRIX ELEMENTS ----------
    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            if(i==j)
            {
                if(*(*(p+i)+j)!=1)
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                if(*(*(p+i)+j)!=0)
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
        printf("Matrix is not a unit matrix...\n");
    }
    else
    {
        printf("Matrix is a unit matrix...\n");
    }
    free(p);
    p=NULL;
}
