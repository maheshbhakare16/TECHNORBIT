#include<stdio.h>

void main()
{
const int a = 10;
int *p = &a;
(*p)++;
printf("%d",a);
printf("%d",*p);
}
