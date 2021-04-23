#include<iostream>
class Demo
{
    int a,b,c;
public:
    Demo(int x,int y,int z)
    {
        this->a = x;
        this->b = y;
        this->c = z;
    }
    Demo& operator*=(const Demo &other)
    {
        this->a *= other.a;
        this->b *= other.b;
        this->c *= other.c;
        return (*this);
    }
    void display()
    {
        std::cout<<"Values of A,B,C are: ";
        std::cout<<this->a<<" , "<<this->b<<" , "<<this->c<<std::endl;
    }
};

int main()
{
    Demo d1(1,2,3);
    Demo d2(40,50,60);
    d1.display();
    d2.display();
    d2*=d1;
    std::cout<<"***************************************************************"<<std::endl;
    d1.display();
    d2.display();
    return 0;
}
