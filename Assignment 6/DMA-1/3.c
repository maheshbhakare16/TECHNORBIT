
/*
Title- 3. Write a C program to search given element in 1-D array using binary search method (Use Dynamic Memory Allocation to represent an array).
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,temp,element,l,r,m,flag=0;
    int* arr=NULL;
    printf("Enter how many elements do you want to enter into the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+j)<=*(arr+i))
            {
                temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
        }
    }
    printf("enter the element to search in array: ");
    scanf("%d",&element);
    l=0;
    r=n-1;
    
    do
    {
        m=(r+l)/2;
        if(*(arr+m)==element)
        {
            flag=1;
            break;
        }
        else
        {
            if(*(arr+m)>element)
            {
                r=m;
            }
            else
            {
                if(*(arr+m)<element)
                {
                    l=m;
                }
            }
            
        }
    }while(m!=0);
    if(flag==1)
    {
        printf("element found....\n");
    }
    else
    {
        printf("element not found....\n");
    }
    free(arr);
    arr=NULL;
}
