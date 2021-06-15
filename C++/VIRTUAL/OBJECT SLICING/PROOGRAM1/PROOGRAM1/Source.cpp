#include<iostream>
#include<conio.h>
class A
{
	int a;
public:
	A()
	{
		a=1;
	}
};
class B
{
	int b;
public:
	B()
	{
		b=2;
	}
};
class C
{
	int c;
public:
	C()
	{
		c=3;
	}
};
class D: public B, public A, public C
{
	int d;
public:
	D()
	{
		d=4;
	}
};

int main()
{
	A *pa;
	B *pb;
	C *pc;
	D d1;
	pa = &d1;
	pb = &d1;
	pc = &d1;
	std::cout<<pa<<std::endl;
	std::cout<<pb<<std::endl;
	std::cout<<pc<<std::endl;
	getch();
	return 0;
}