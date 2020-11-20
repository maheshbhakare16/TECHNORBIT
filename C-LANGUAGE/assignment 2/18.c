/*
Title- 18. Write a C program to find frequency of each digit in a given integer.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
 int num,value,no1=0,no2=0,no3=0,no4=0,no5=0,no6=0,no7=0,no8=0,no9=0,no0=0;
 printf("enter the number: ");
 scanf("%d",&num);
 if(num==0)
 {
     no0++;
 }
 while(num!=0)
 {
     value=num%10;
     num/=10;
     switch(value)
     {
         case 0: 
             no0++;
             break;
        case 1: 
             no1++;
             break;
        case 2: 
             no2++;
             break;
        case 3: 
             no3++;
             break;
        case 4: 
             no4++;
             break;
        case 5: 
             no5++;
             break;
        case 6: 
             no6++;
             break;
        case 7: 
             no7++;
             break;
        case 8: 
             no8++;
             break;
        case 9: 
             no9++;
             break;
     }
 }
 printf("0=%d\n1=%d\n2=%d\n3=%d\n4=%d\n5=%d\n6=%d\n7=%d\n8=%d\n9=%d\n",no0,no1,no2,no3,no4,no5,no6,no7,no8,no9);
}
