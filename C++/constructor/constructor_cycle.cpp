#include<iostream>
class Test
{
    const int a;
    int b;
public:
    Test(int x,int y):a(x),b(y)
    {
        std::cout<<"in test "<<a<<" "<<b<<std::endl;
    }
};
class Demo:Test
{
public:
    Demo():Test(10,20)
    {
    }
};
int main()
{
    Demo d;
    
}
