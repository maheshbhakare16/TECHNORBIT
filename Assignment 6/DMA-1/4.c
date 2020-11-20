 
/*
Title- 4. Write a C program to find second highest element in given 1-D array using Dynamic Memory Allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,temp;
    int* arr=NULL;
    printf("Enter how many elements do you want to enter into the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter array elements to sort: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+j)>=*(arr+i))
            {
                temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
        }
    }
    printf("Second heighest element in array is: %d\n",*(arr+1));  
    free(arr);
    arr=NULL;
}

