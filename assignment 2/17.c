/*
Title- 17. Write a C program to check whether a number is palindrome or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int n,n1,num,a;
    printf("enter the number: ");
    scanf("%d",&n);
    n1=n;
    num=n%10;
    n=n/10;
    a=num;
    while(n!=0)
    {
        a=a*10+(n%10);
        n=n/10;
    }
    if(n1==a)
    {
        printf("number is palindrome\n");
    }
    else
    {
        printf("number is not palindrome\n");
    }
        
    
}
