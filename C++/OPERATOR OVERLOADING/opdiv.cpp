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
    Demo& operator/(const Demo &other)
    {
        Demo *d = (Demo*)malloc(sizeof(Demo));
        d->a = this->a / other.a;
        d->b = this->b / other.b;
        d->c = this->c / other.c;
        return (*d);
    }
    void display()
    {
        std::cout<<"Values of A,B,C are: ";
        std::cout<<this->a<<" , "<<this->b<<" , "<<this->c<<std::endl;
    }
};

int main()
{
    Demo d1(10,20,30);
    Demo d2(40,50,60);
    Demo d3 = d2/d1;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}
