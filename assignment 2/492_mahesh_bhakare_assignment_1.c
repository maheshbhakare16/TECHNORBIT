 
/*
Title- 1. Write a C program to print all natural numbers from 1 to n. - using while loop
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>

void main()
{
 int i=1,num;
 printf("Enter the Number: ");
 scanf("%d",&num);
 while(i<=num)
 {
     printf("%d\t",i);
     i++;
 }
 printf("\n");
    
}


/*
Title- 2. Write a C program to print all natural numbers in reverse (from n to 1). -using while loop
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>

void main()
{
 int n;
 printf("Enter the number: ");
 scanf("%d",&n);
 while(n>=1)
 {
     printf("%d\t",n);
     n--;
 }
 printf("\n");
}




/*
Title- 3. Write a C program to print all alphabets from a to z. - using while loop
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
char alpha='a';
while(alpha!='z')
{
    printf("%c\t",alpha);
    alpha++;
}
printf("%c\n",alpha);
}



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



/*
Title- 5. Write a C program to print all odd number between 1 to 100.
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
  if(i%2!=0)
  {
      printf("%d\t",i);
 
  }
  i++;
}
 printf("\n");
}



/*
Title- 6. Write a C program to find sum of all natural numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>

void main()
{
    int n,n1,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    n1=n;
    while(n>=1)
    {
        sum+=n;
        n--;
    }
    
    printf("sum of 1 to %d natural numbers is: %d\n",n1,sum);
}





/*
Title- 7. Write a C program to find sum of all even numbers between 1 to n
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
int n,sum=0;
printf("enter the number: ");
scanf("%d",&n);
while(n>=1)
{
 if(n%2==0)
 {
     sum+=n;
 }
 n--;
}
   printf("sum is: %d\n",sum); 
}





/*
Title- 8. Write a C program to find sum of all odd numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int n,sum=0;
 printf("enter the number: ");
 scanf("%d",&n);
 while(n>=1)
 {
     if(n%2!=0)
     {
         sum+=n;
     }
     n--;
 }
 printf("sum of odd numbers is: %d\n",sum);
}



/*
Title- 9. Write a C program to print multiplication table of any number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int n,i=1;
 printf("enter the number: ");
 scanf("%d",&n);
 while(i<=10)
 {
     printf("%d\t",n*i);
     i++;
}
printf("\n");
}



/*
Title- 9.1 Write a C program to print multiplication table upto n number
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int n,i=1;
    printf("enter the number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        int j=1;
        while(j<=10)
        {
            printf("%d\t",i*j);
            j++;
        }
        printf("\n");
        i++;
    }
    
}




/*
Title- 10. Write a C program to count number of digits in a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int n,i=0;
   printf("enter the number: ");
   scanf("%d",&n);
   while(n!=0)
   {
       n=n/10;
       i++;
   }
   printf("%d\n",i);
}



/*
Title- 11. Write a C program to find first and last digit of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int n,last,first;
    printf("enter the number: ");
    scanf("%d",&n);
    last=n%10;
    while(n!=0)
    {
        first=n%10;
        n=n/10;
       
    }
    printf("first= %d and last= %d\n",first,last);
}



/*
Title- 12. Write a C program to find sum of first and last digit of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int n,first,last;
    printf("enter the number: ");
    scanf("%d",&n);
    last=n%10;
    while(n!=0)
    {
        first=n%10;
        n=n/10;
    }
    printf("sum of first and last digit is: %d\n",first+last);
}





/*
Title- 14. Write a C program to calculate sum of digits of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
 int n,sum=0;
 printf("enter the number: ");
 scanf("%d",&n);
 while(n!=0)
 {
  sum+=(n%10);
  n=n/10;
 }
 printf("sum is: %d\n",sum);
}



/*
Title- 15. Write a C program to calculate product of digits of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int n,mult=1;
 printf("enter the number: ");
 scanf("%d",&n);
 while(n!=0)
 {
     mult*=(n%10);
     n=n/10;
 }
 printf("multiplcation is: %d\n",mult);
}



/*
Title- 16. Write a C program to enter a number and print its reverse.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("the number in reverse order is: ");
    while(n!=0)
    {
        printf("%d",n%10);
        n/=10;
    }
    printf("\n");
}



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



/*
Title- 20. Write a C program to print all ASCII character with their values.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int i=0;
    printf("ascii characters of numbers are: \n");
    while(i<=255)
    {
        printf("%d = %c\n",i,i);
        i++;
    }
    printf("\n");
}




/*
Title- 21. Write a C program to find power of a number using for loop.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int num ,value,power=1;
 printf("enter the number: ");
 scanf("%d",&num);
 printf("enter the power value: ");
 scanf("%d",&value);
 for( ;value>=1;value--)
 {
     power*=num;
 }
 printf("answer is: %d\n",power);
}




/*
Title- 22. Write a C program to find all factors of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int num,i=2;
 printf("enter the number: ");
 scanf("%d",&num);
 printf("factors are: ");
 while(i<=num)
 {
     if(num%i==0)
     {
         printf("%d\t",i);
         
    }
 i++;
 }
 printf("\n");
}



/*
Title- 23. Write a C program to calculate factorial of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n>=1)
    {
        fact*=n;
        n--;
    }
    printf("factorial is: %d\n",fact);
}




/*
Title- 24. Write a C program to find HCF (GCD) of two numbers.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int n1, n2,i=1,k;
    printf("enter 1st number: ");
    scanf("%d",&n1);
    printf("enter 2nd number: ");
    scanf("%d",&n2);
    while(i<=n1 && i<=n2)
    {
        if(n1%i==0 && n2%i==0)
        {
            k=i;
        }
        i++;
    }
    printf("GCD of %d and %d is: %d\n",n1,n2,k);
}    
    

    
    
    
/*
Title- 25. Write a C program to find LCM of two numbers.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/


#include<stdio.h>
void main()
{
 int n1,n2,i=1;
 printf("enter 1st number: ");
 scanf("%d",&n1);
 printf("enter 2nd number: ");
 scanf("%d",&n2);
 while(1)
 {
  if(i%n1==0 && i%n2==0)
  {
   break;   
  }
  i++;
 }
 printf("LCM of %d and %d is: %d\n",n1,n2,i);    
}



/*
Title- 26. Write a C program to check whether a number is Prime number or not.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int n,i=2;
 printf("enter the number to check whether it is prime or not: ");
 scanf("%d",&n);
 if(n==1)
     {
         printf("%d is a prime number.\n",n);
     }
 while(i<=n)
 {
     
     if(n%i==0)
     {
         if(n==i)
         {
          printf("%d is a prime number.\n",n);   
         }
         else
         {
             printf("%d is not a prime number.\n",n);
             break;
         }
     }
     i++;
 }
}




/*
Title- 27. Write a C program to print all Prime numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h> 
void main()
{
 int n,j=1;
 printf("enter the number: ");
 scanf("%d",&n);
 while(j<=n)
 {
     if(j==1)
         {
             printf("%d\t",j);
         }
    int i=2;
     while(i<=j)
     {
         
         if(j%i==0)
         {
             if(j==i)
             {
                 printf("%d\t",j);
             }
             else
             {
                 break;
             }
         }
         i++;
     }
     j++;
 }
 printf("\n");
}




/*
Title- 28. Write a C program to find sum of all prime numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/
#include<stdio.h>
void main()
{
    int n,j=1,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while(j<=n)
    {
        if(j==1)
        {
           sum=sum+j;
        }
        int i=2;
    while(i<=j)
    {
        if(j%i==0)
        {
            if(j==i)
            {
                sum=sum+j;
            }
            else
            {
                break;
            }
            
        }
        i++;
    }
    j++;
    }
    printf("sum between 1 to %d prime numbers is: %d\n",n,sum);
}



/*
Title- 29. Write a C program to find all prime factors of a number.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int n,j=1;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("prime factors of %d are: ",n);
    while(j<=n)
    {
        if(n%j==0)
        {
            int i=2;
            while(i<=j)
            {
                if(j%i==0)
                {
                    if(j==i)
                    {
                        printf("%d\t",j);
                    }
                    else
                    {
                        break;
                    }
                }
                i++;
            }
        }
        j++;
    }
    printf("\n");
}




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






/*
Title- 33. Write a C program to print all Perfect numbers between 1 to n.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
    int num,i=1,j,sum;
    printf("enter the number: ");
    scanf("%d",&num);
    while(i<=num)
    {
//         finding the sum of all factors of a number
        j=1;
        sum=0;
       while(j<i)
       {
         if(i%j==0)
         {
             sum+=j;
         }
         j++;
       }
//        to check the number is perfect or not
       if(sum==i)
       {
           printf("%d\t",i);
       }
       i++;
    }
    printf("\n");
}




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




/*
Title- 36. Write a C program to print Fibonacci series up to n terms.
Author- Bhakare Mahesh Santosh
ID- 492
Batch- TechnOrbit(PPA-8)
*/

#include<stdio.h>
void main()
{
 int num,i=0,j=1,k;
 printf("enter the number: ");
 scanf("%d",&num);
 if(num>0)
 {
 printf("%d\t",0);
 }
 while(num>1)
 {
     k=i;
     i=i+j;
     printf("%d\t",i);
     j=k;
     num--;
 
 }
 printf("\n");
}


        
        
        
