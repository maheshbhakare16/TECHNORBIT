#include<iostream>
#include<conio.h>
class A
{
protected:
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
	virtual ~A()
	{
		std::cout<<"A destructor"<<std::endl;
	}
};

class B: public A
{
public:
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
	~B()
	{
		std::cout<<"B destructor"<<std::endl;
	}
};

int main()
{
	B obj;
	obj.display();
	//A *pa = &obj;
	int *p = (int*)&obj;
	int *q = (int*)(*(p+1));
	void (*fp)() =  reinterpret_cast< void (*)() > (*(q));
	fp(); 
	//A *pa = new B;
	//delete pa;
	getch();
	return 0;
}


