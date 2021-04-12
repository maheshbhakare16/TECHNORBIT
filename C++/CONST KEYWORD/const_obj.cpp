#include<iostream>
class Demo
{
    int x = 10;
    mutable int y =20;
    const int z =30;
public:
    void fun()const
    {
        int a =20;
        a++;
        //x++; // error due to constant function
        y++;
        //z++; // error due to constant function
    }
    void gun() //error for constant object call
    {
        x++;
        y++;
        //z++; //error as z constant
    }
};
int main()
{
    Demo d1;
    d1.fun();
    d1.gun();
    const Demo d2;
    d2.fun();
    //d2.gun();
    return 0;
}
