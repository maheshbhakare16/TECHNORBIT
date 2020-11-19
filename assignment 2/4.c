/*
Title- 4. Write a C program to print all even numbers between 1 to 100. - using
while loop
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
int i=0;
 while(i<=100)
 {
  if(i%2==0)
  {
      printf("%d\t",i);
  }
  i++;
 }
 printf("\n");
}
