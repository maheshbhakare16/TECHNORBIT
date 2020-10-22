/* armstrong number- 153= 1^3+5^3+3^3 addition of each digit of a number with their power (power= no. of digits in a given number) */

/*
Title- 30. Write a C program to check whether a number is Armstrong number or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int num,i=0,j,num2,value,sum=0,mult;
 printf("enter the number: ");
 scanf("%d",&num);
 num2=num;
// to find the no. of digits in a number
 while(num2!=0)
 {
     num2/=10;
     i++;
 }
//  to find the armstrong value
 num2=num;
 while(num2!=0)
 {
   value= num2%10;
   mult=1;
   for(j=1;j<=i;j++)
   {
       mult*=value;
   }
   sum+=mult;
   num2/=10;
 }
//  to check the armstrong or not
 if(sum==num)
 {
     printf("the number is armstrong number\n");
 }
 else
 {
     printf("the number is not an armstrong number\n");
 }
     
}
