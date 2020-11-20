#include<stdio.h>


void dopostlike()
{
static int like=0;
like++;
printf("%d\n",like);
}
void dostorylike()
{
static int like=0;
like++;
printf("%d\n",like);
}
void main()
{
dopostlike();
dopostlike();
dopostlike();
dopostlike();
dopostlike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
}
