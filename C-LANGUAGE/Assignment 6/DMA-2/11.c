 
/*
Title- 11. Write a C program to print all prime numbers from given array among given range using
Dynamic memory allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,element,num;
    int* arr=NULL;
    printf("Enter how many elements do you want to enter into the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter elements into the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("Enter the range upto which you want to find elements are prime or not: ");
    scanf("%d",&element);
    printf("prime numbers are: [");
    for(i=0;i<n;i++)
    {
        num=*(arr+i);
        j=2;
        if(num<element)
        {
            while(j<=num)
            {
                if(num%j==0)
                {
                    if(num==j)
                    {
                        printf("%d, ",num);   
                    }
                    else
                    {
                        break;
                    }
                }
                j++;
            }
        }
        
    }  
    printf("]\n");
    free(arr);
    arr=NULL;
}
