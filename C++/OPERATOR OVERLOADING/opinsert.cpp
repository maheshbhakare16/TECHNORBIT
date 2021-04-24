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
    friend std::ostream& operator<<(std::ostream &os,const Demo &other);
};
std::ostream& operator<<(std::ostream &os,const Demo &other)
{
    os<<other.a<<" ";
    os<<other.b<<" ";
    os<<other.c;
    return os;
}
int main()
{
    Demo d1(10,20,30);
    Demo d2(50,60,70);
    std::cout<<d1<<std::endl<<d2<<std::endl;
    return 0;
}
