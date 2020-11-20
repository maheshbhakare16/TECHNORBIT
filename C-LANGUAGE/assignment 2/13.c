/*
Title- 13. Write a C program to swap first and last digits of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int num,num2,last,first,rev=0,swap;
    printf("Enter the number: ");
    scanf("%d",&num);
    num2=num;
    last=num2%10;
    
    while(num2!=0)
    {
        first=num2%10;
        rev=rev*10+(num2%10);
        num2=num2/10;
    }
    swap=last;
    rev/=10;
    while(rev!=0)
    {
        swap=swap*10+(rev%10);
        rev/=10;
    }
    swap/=10;
    swap=swap*10+first;
    printf("swapped number is: %d\n",swap);
}
