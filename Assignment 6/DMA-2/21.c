 
/*
Title- 21. Write a C program to print all numbers from array which are divisible by 5 and 7 using
Dynamic memory allocation.
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
    printf("array elements which are divisible by 5 & 7 are: [");
    for(i=0;i<n;i++)
    {
        if(*(arr+i)%5==0 || *(arr+i)%7==0)
        {
            printf("%d, ",*(arr+i));
        }
    }
    printf("]\n");
    free(arr);
    arr=NULL;
    
}
