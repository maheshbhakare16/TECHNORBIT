/*
Title- 6. Write a C program to print all armstrong numbers from given integer array using Dynamic
memory allocation.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,num,j,count,mult,sum,value;
    int* arr=NULL;
    printf("Enter how many elements do you want to enter into the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter elements into the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("Armstring elements are: [");
    for(i=0;i<n;i++)
    {
        sum=0;
        count=0;
        num=*(arr+i);
        // to find the no. of digits in a number
        while(num!=0)
        {
            num/=10;
            count++;
        }
        //  to find the armstrong value
        num=*(arr+i);
        while(num!=0)
        {
            value= num%10;
            mult=1;
            for(j=1;j<=count;j++)
            {
                mult*=value;
            }
            sum+=mult;
            num/=10;
        }
        //  to check the armstrong or not
        if(sum==*(arr+i))
        {
            printf("%d, ",*(arr+i));
        }
    }
    printf("]\n");
    free(arr);
    arr=NULL;
    
}
