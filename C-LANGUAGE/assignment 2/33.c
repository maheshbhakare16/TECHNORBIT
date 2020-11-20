

/*
Title- 33. Write a C program to print all Perfect numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int num,i=1,j,sum;
    printf("enter the number: ");
    scanf("%d",&num);
    while(i<=num)
    {
//         finding the sum of all factors of a number
        j=1;
        sum=0;
       while(j<i)
       {
         if(i%j==0)
         {
             sum+=j;
         }
         j++;
       }
//        to check the number is perfect or not
       if(sum==i)
       {
           printf("%d\t",i);
       }
       i++;
    }
    printf("\n");
}
