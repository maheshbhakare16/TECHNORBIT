#include<iostream>
class Demo
{
    const int a;
    int b;
public:
    Demo():a(10),b(20)
    {
        std::cout<<"In Demo:  "<<a<<" "<<b<<std::endl;
    }
};
int main()
{
    Demo d;
    return 0;
}
