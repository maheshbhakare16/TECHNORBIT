#include<iostream>

class Demo
{
public:
    Demo(int a)
    {
        std::cout<<"Demo Constructor";
    }
//     void* operator new(long unsigned int size)
//     {
//         std::cout<<"new operator overloaded";
//         return malloc(size);
//     }
//     void operator delete(void* p)
//     {
//         std::cout<<"delete operator overloaded";
//         free(p);
//     }
};
void* operator new(long unsigned int size)
{
    std::cout<<"new operator overloaded";
    return malloc(size);
}
void operator delete(void* p)
{
    std::cout<<"delete operator overloaded";
    free(p);
}

int main()
{
//     Demo* d = new Demo(10);
//     delete d;
    int* p = new int[10];
    delete[] p;
}
