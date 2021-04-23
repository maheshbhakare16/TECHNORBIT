#include<iostream>
class Demo
{
    int a,b,*p;
public:
    Demo()
    {
        
    }
    Demo(int x,int y,int z)
    {
        this->a = x;
        this->b = y;
        this->p = (int*)malloc(sizeof(int));
        *(this->p) = z;
    }
    Demo& operator=(const Demo &other)
    {
        this->a = other.a;
        this->b = other.b;
        this->p = (int*)malloc(sizeof(int));
        *(this->p) = *(other.p);
        return (*this);
    }
    void display()
    {
        std::cout<<"Values of A,B,P are: ";
        std::cout<<this->a<<" , "<<this->b<<" , "<<*(this->p)<<std::endl;
    }
};

int main()
{
    Demo d1(10,20,30);
    Demo d2;;
    Demo d3;
    d3 = d2 = d1;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}
    
