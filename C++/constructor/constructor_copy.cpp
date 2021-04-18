#include<iostream>

class Demo
{
public:
    int a;
    int b;
    int* p;
    Demo(int x, int y, int c)
    {
        this->a = x;
        this->b = y;
        this->p = (int*)malloc(sizeof(int));
        *(this->p) = c;
    }
};
int main()
{
    Demo d1(10,20,30);
    Demo d2(d1);
    std::cout<<"BEFORE CHANGE For D1: ";
    std::cout<<d1.a<<" "<<d1.b<<" "<<*(d1.p)<<std::endl;
    std::cout<<"BEFORE CHANGE For D2: ";
    std::cout<<d2.a<<" "<<d2.b<<" "<<*(d2.p)<<std::endl;
    (d1.a)++;
    (d2.b)++;
    (*(d1.p))++;
    std::cout<<"For D1: ";
    std::cout<<d1.a<<" "<<d1.b<<" "<<*(d1.p)<<std::endl;
    std::cout<<"For D2: ";
    std::cout<<d2.a<<" "<<d2.b<<" "<<*(d2.p)<<std::endl;
}
