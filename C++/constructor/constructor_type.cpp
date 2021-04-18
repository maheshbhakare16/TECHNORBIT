#include<iostream>
class Demo
{
    int a;
    int b;
public:
    Demo() // -- NON PARAMETERISED CONSTRUCTOR --
    {
        std::cout<<"In Demo:  "<<a<<" "<<b<<std::endl;
    }
    Demo(int x, int y)  // -- PARAMETERISED CONSTRUCTOR --
    {
        this->a = x;
        this->b = y;
        std::cout<<"In Demo:  "<<a<<" "<<b<<std::endl;
    }
};
int main()
{
    Demo d;
    Demo d1(11,220);
    const Demo d1(10,20);
    return 0;
}
