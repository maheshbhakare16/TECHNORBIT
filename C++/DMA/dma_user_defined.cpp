#include<iostream>
#include<stdlib.h>
class Demo
{
public:
    Demo()
    {
        std::cout<<"In demo Constructor";
    }
    ~Demo()
    {
        std::cout<<"In Demo Destructor";
    }
};

int main()
{
    Demo *d = new Demo();
    Demo *d1 = (Demo*)malloc(sizeof(Demo));
    free(d);
    delete d1;
}
