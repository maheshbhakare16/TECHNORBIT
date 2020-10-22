#include<stdio.h>
void add();
void sub();
int a=20,b=10;
static int x=10;
void main()
{
add();
sub();
printf("%d\n",x);
}
