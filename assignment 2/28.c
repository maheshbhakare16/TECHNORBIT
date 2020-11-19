/*
Title- 28. Write a C program to find sum of all prime numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int n,j=1,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while(j<=n)
    {
        int i=2;
        while(i<=j)
        {
            if(j%i==0)
            {
            if(j==i)
            {
                sum=sum+j;
            }
            else
            {
                break;
            }
            
        }
        i++;
    }
    j++;
    }
    printf("sum between 1 to %d prime numbers is: %d\n",n,sum);
}
