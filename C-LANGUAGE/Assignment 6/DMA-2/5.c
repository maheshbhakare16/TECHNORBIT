
/*
Title- 5. Write a C program to demonstrate malloc , calloc , realloc and free function.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,m;
    int *arr1=NULL,*arr2=NULL,*arr3=NULL;
    
    printf("Enter how many elements do you want to enter into the array: ");
    scanf("%d",&n);
    
//     ---------- malloc -----------------
    arr1=(int*)malloc(n*sizeof(int));
    printf("enter elements into the array1: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr1+i);
    }
    printf("Entered array1 elements are: [");
    for(i=0;i<n;i++)
    {
        printf("%d, ",*(arr1+i));
    }
    printf("]\n");
    
//     ------ calloc ---------
    arr2=(int*)calloc(sizeof(int), n);
    printf("enter elements into the array2: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr2+i);
    }
    printf("Entered array2 elements are: [");
    for(i=0;i<n;i++)
    {
        printf("%d, ",*(arr2+i));
    }
    printf("]\n");
    
//   -----  realloc -----------
    printf("Enter new size for array2: ");
    scanf("%d",&m);
    arr3=(int*)realloc(arr2, m*sizeof(int));
    arr2=NULL;
    printf("enter elements into the modified array2 again: \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",arr3+i);
    }
    printf("Entered  new array2 elements are: [");
    for(i=0;i<m;i++)
    {
        printf("%d, ",*(arr3+i));
    }
    printf("]\n");
    free(arr1);
    free(arr2);
    free(arr3);
    arr1=arr2=arr3=NULL;
    
    
}
