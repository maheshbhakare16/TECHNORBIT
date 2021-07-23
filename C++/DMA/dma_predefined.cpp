#include<iostream>

int main()
{
    int* a = new int(5);
    long long*  b;
    std::cout<<*a;
    try
    {
//         b = new(std::nothrow) long long[(9223372036854775807 / 16)];
        b = new long long[(9223372036854775807 / 16)];
    }
    catch(...) 
    {
        std::cout<<b;
    }
}
