
#include<stdio.h>
void main()
{
goto demo;
int i = 10;
test:
printf("H");
printf("H");
printf("H");
demo:
printf("Hello");
printf("Hello");
printf("Hello");
printf("Hello");
i--;
if(i>0)
goto test;
}
