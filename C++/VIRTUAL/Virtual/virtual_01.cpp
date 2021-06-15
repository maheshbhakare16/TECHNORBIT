#include<iostream>

class Demo
{
    int a;
    int b;
public:
    Demo(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    virtual void Display()
    {
        std::cout<<"a: "<<a<<std::endl;
        std::cout<<"b: "<<b<<std::endl;
    }
};

class Test : public Demo
{
    char c;
    char d;
public:
    Test(int a, int b, char c, char d):Demo(a,b)
    {
        this->c = c;
        this->d = d;
    }
    void Display()
    {
        Demo::Display();
        std::cout<<"c: "<<c<<std::endl;
        std::cout<<"d: "<<d<<std::endl;
    }
};

int main()
{
    Demo d1(0,0);
    Demo *d;
    Test t(1,2,'a','b');
    d = &t;
    std::cout<<sizeof(*d)<<std::endl;
    std::cout<<sizeof(d1)<<std::endl;
    std::cout<<sizeof(t)<<std::endl;
}
