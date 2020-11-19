/*
Title- 19. Write a C program to enter a number and print it in words.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int n,a,b=0,no0=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        b=b*10+(n%10);
        if(n%10==0)
        {
            no0++;
        }
        n=n/10;
        
    }
    while(b!=0)
    {
        a=b%10;
        if(b%10==0)
        {
            no0--;
        }
        b=b/10;
        switch(a)
        {
            case 1:printf("one\t");
            break;
            case 2:printf("two\t");
            break;
            case 3:printf("three\t");
            break;
            case 4:printf("four\t");
            break;
            case 5:printf("five\t");
            break;
            case 6:printf("six\t");
            break;
            case 7:printf("seven\t");
            break;
            case 8:printf("eight\t");
            break;
            case 9:printf("nine\t");
            break;
            case 0:printf("zero\t");
            break;
        }
    }
    while(no0>=1)
    {
        printf("zero\t");
        no0--;
    }
    printf("\n");
}
