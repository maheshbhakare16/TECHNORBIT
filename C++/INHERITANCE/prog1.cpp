#include<iostream>
class Parent
{
    int x;
public:
    int y;
protected:
    int z;
};
class Child  : Parent
{
    char a;
public:
    char b;
protected:
    char c;
    
    void fun()
    {
        //std::cout<<y<<z<<a<<b;
    }
};
class GChild : protected Child
{
    int m;
    void fun1()
    {
        //std::cout<<b<<m;
    }
};
int main()
{
    Parent p;
    Child c;
    GChild gc;
    std::cout<<sizeof(p)<<std::endl<<sizeof(c)<<std::endl<<sizeof(gc)<<std::endl;
    return 0;
}
