#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
printf("%d%d%d%d%d",--a,a--,a,++a,a++);
}

//input--> 10
//output--> 1012121210



#include<stdio.h>
void main()
{
int a;
a=10;
printf("%d%d%d%d%d",--a,a--,a,++a,a++);
}

//output--> 1012101010
