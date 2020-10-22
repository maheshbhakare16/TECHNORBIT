/*
Title- 31. Write a C program to print all Armstrong numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int lnum,num=1,num2,i,value,mult,j,sum;
 printf("enter the number: ");
 scanf("%d",&lnum);
 while(num<=lnum)
 {
//      find no. of digits in a number.
     i=0;
     num2=num;
     while(num2!=0)
     {
         num2/=10;
         i++;
     }
//      to find the armstrong value.
     sum=0;
     num2=num;
     while(num2!=0)
     {
         value=num2%10;
         mult=1;
         for(j=1;j<=i;j++)
         {
             mult*=value;
         }
         sum+=mult;
         num2=num2/10;
     }
     if(num==sum)
     {
         printf("%d\t",num);
     }
     num++;
     }
     printf("\n");
}
     
     
