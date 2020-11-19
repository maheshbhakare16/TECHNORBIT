/* strong number- addition of factorials of digits of a number equals to that number 145=1!+4!+5! */

/*
Title- 34. Write a C program to check whether a number is Strong number or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int num,num2,value,fact,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    num2=num;
//     finding the each digit of number
    while(num!=0)
    {
        value=num%10;
        fact=1;
//         finding the factorial of the digit
        while(value>=1)
        {
            fact*=value;
            value--;
        }
//         adding factorial of the digit
        sum+=fact;
        num/=10;
    }
//      to check that number is strong or not
    if(sum==num2)
    {
        printf("the number is a strong number\n");
    }
    else
    {
        printf("number is not a strong number\n");
    }
}
