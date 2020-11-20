/* perfect numbers - addition of its factors equals to that number 6=3+2+1 */

/*
Title- 32. Write a C program to check whether a number is Perfect number or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
 int num,sum=0,i=1;
 printf("enter the number: ");
 scanf("%d",&num);
 while(i<num)
 {
     if(num%i==0)
     {
         sum+=i;
     }
     i++;
 }
 if(sum==num)
 {
     printf("number is a perfect number \n");
 }
 else
 {
  printf("number is not a perfect number \n");
 }
 
}
