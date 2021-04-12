#include<iostream>

class Demo
{
public:
    int c;
private:
    int d;
protected:
    int a;
};
class Child:Demo
{
public:
    int m;
};
class Dindi
{
private:
    int x;
};
int main()
{

    Demo d;
    Child c;
    Dindi dj;
    std::cout<<sizeof(d)<<std::endl;
    std::cout<<sizeof(c)<<std::endl;
    std::cout<<sizeof(dj)<<std::endl;
    return 0;
}
