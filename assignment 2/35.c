

/*
Title- 35. Write a C program to print all Strong numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int num,num2,i=1,value,j,fact,sum;
    printf("enter the number: ");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=0;
        num2=i;
//       to find the digits of a number
      while(num2!=0)
      {
          value=num2%10;
//           to find the factorial of that digits
          fact=1;
          while(value>=1)
          {
              fact*=value;
              value--;
          }
          sum+=fact;
          num2/=10;
      }
//       to check the number is strong or not
      if(sum==i)
      {
          printf("%d\t",i);
      }
      i++;
    }
    printf("\n");
}
