
/*
Title-13. Write a C program to demonstrate dangling pointer using Dynamic memory allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    int *array=NULL;
    
    array=(int*)malloc(n*sizeof(int));
    printf("Enter how many elements do you want to enter into the array: ");
    scanf("%d",&n);
    printf("enter elements into the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",array+i);
    }
    printf("Entered array elements are: [");
    for(i=0;i<n;i++)
    {
        printf("%d, ",*(array+i));
    }
    printf("]\n");
    free(array);
    array=NULL;
}
