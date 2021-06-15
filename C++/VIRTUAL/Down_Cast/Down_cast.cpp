#include<iostream>

class A
{
public:
	int a;
	A()
	{
		a=10;
	}
};
class B
{
public:
	int b;
	B()
	{
		b=20;
	}
};
class C
{
public:
	int c;
	C()
	{
		c=30;
	}
};

class D: public A, public B, public C
{
public:
	int d;
	D()
	{
		d =40;
	}
};

int main()
{
	D obj;

	A *pa = &obj;
	B *pb = &obj;
	C *pc = &obj;
	D *pd = &obj;
	/* std::cout<<pa->a<<std::endl;
	std::cout<<pa->b<<std::endl;
	std::cout<<pa->c<<std::endl;
	std::cout<<pa->d<<std::endl; */

	/* std::cout<<pb->a<<std::endl;
	std::cout<<pb->b<<std::endl;
	std::cout<<pb->c<<std::endl;
	std::cout<<pb->d<<std::endl; */

	/* std::cout<<pc->a<<std::endl;
	std::cout<<pc->b<<std::endl;
	std::cout<<pc->c<<std::endl;
	std::cout<<pc->d<<std::endl; */

	/* std::cout<<pd->a<<std::endl;
	std::cout<<pd->b<<std::endl;
	std::cout<<pd->c<<std::endl;
	std::cout<<pd->d<<std::endl; */

	pd = static_cast<D*>(pb); // 1) it checks there is inheritance or not. 2)


	std::cout<<pd->a<<std::endl;
	std::cout<<pd->b<<std::endl;
	std::cout<<pd->c<<std::endl;
	std::cout<<pd->d<<std::endl;


	return 0;
}
