#include<iostream>

template <class T1, class T2>
class Demo
{
    T1 x;
    T2 y;
public:
    Demo(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }
    
    template <class T3, class T4>
    T3 add(T3 x, T4 y)
    {
        return x+y;
    }
};

int main()
{
    Demo <int,int>d1(4,5);
    std::cout<<"int int :"<<d1.add<int,int>(9,5)<<std::endl;
    std::cout<<"float,float :"<<d1.add<float,float>(2.3f,5.4f)<<std::endl;
    std::cout<<"int,float: "<<d1.add<int,float>(12,12.5f)<<std::endl;
    
    return 0;
}
