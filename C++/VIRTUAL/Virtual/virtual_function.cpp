#include<iostream>
class A
{
	int a;
public:
	A()
	{
		a=10;
	}
	virtual void display()
	{
		std::cout<<"a = "<<this->a<<std::endl;
	}
};

class B: public A
{
	int b;
public:
	B()
	{
		b=20;
	}
	void display()
	{
		A::display();
		std::cout<<"b = "<<this->b<<std::endl;
	}
};

int main()
{
	B obj;
	A *pa = &obj;
	pa->display();
	return 0;
}


