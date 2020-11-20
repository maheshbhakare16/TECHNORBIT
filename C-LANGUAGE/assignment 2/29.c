/*
Title- 29. Write a C program to find all prime factors of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int n,j=1;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("prime factors of %d are: ",n);
    while(j<=n)
    {
        if(n%j==0)
        {
            int i=2;
            while(i<=j)
            {
                if(j%i==0)
                {
                    if(j==i)
                    {
                        printf("%d\t",j);
                    }
                    else
                    {
                        break;
                    }
                }
                i++;
            }
        }
        j++;
    }
    printf("\n");
}
