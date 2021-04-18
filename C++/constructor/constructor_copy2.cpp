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
    Demo(const Demo &other)
    {
//         Demo d4(19,29,35);
//         other = d4;
//         std::cout<<other.a<<other.b<<*(other.p)<<std::endl;
        this->a = other.a;
        this->b = other.b;
        this->p = (int*)malloc(sizeof(int));
        *(this->p) = *(other.p);
    }
    Demo()
    {
        
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
    
    Demo d3;
    d3 = d1;
    std::cout<<"For D3: ";
    std::cout<<d3.a<<" "<<d3.b<<" "<<*(d3.p)<<std::endl;
}
