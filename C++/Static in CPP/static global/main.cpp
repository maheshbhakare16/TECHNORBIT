#include"add_sub.h"
#include<iostream>
void add();
void sub();
int a=20,b=10;
static int x=10;
int main()
{
add();
sub();
std::cout<<"x is: "<<x<<std::endl;
return 0;
}


