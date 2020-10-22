#include<stdio.h>
void main()
{
int a=10,b=1;
int c;
//c=a<<b;
//c=a>>b;
//c=a^b;
c=a&b;
int d=a|b;
printf("%d%d%d",c,d,sizeof(a));
}
