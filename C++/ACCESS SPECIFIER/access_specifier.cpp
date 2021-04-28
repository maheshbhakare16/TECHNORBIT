#include<iostream>
class Demo
{
    int a,b,c;
public:
    Demo(int x, int y, int z)
    {
        this->a = x;
        this->b = y;
        this->c = z;
    }
    void display()
    {
        std::cout<<this->a<<", "<<this->b<<", "<<this->c<<std::endl;
    }
};
int main()
{
    int *p = NULL;
    Demo d(10,20,30);
    d.display();
    p = reinterpret_cast<int*>(&d);
    (*(p+0))++;
    (*(p+1))++;
    (*(p+2))++;
    d.display();
}
