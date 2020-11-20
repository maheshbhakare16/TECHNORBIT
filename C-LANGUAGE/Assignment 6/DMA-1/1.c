 
/*
Title- 1. Write a C program to to represent 1-D array using Dynamic Memory Allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    int* arr=NULL;
    printf("Enter how many elements do you want to enter into the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter elements into the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("Entered array elements are: [");
    for(i=0;i<n;i++)
    {
        printf("%d, ",*(arr+i));
    }
    printf("]\n");
    free(arr);
    arr=NULL;
    
    
}
