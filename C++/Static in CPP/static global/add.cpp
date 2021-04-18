
#include<iostream>
extern int a,b;
/*static*/ void add() //we cannot use static function outside this file 
{
int c;
c=a+b;
std::cout<<"addition is: "<<c<<std::endl;
}

