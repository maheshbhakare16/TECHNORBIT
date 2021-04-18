#include<iostream>
 const int w = 10;
class Demo
{
    int x=10;
    mutable int y=20;
    const int z=10;
public:
    Demo()
    {
//        x=10;
       std::cout<<"hii"<<std::endl;
    }
public:
    void fun()const //  -- CONSTANT MEMBER FUNCTION --
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

void run()
{
    const int a =20;    // -- CONSTANT LOCAL VARIABLE --
    int *p = const_cast<int*>(&a); 
    (*p)++;
    int* q = const_cast<int*>(&w);
//     (*q)++; //  -- SEGMENTATION FAULT --
    std::cout<<"a = "<<a<<" *p = "<<(*p)<<std::endl;
}

int main()
{
    Demo d1;
    d1.fun();
    d1.gun();
    const Demo d2;
    d2.fun();
//  d2.gun(); // ERROR WHEN CALLING (CONST OBJECT TO NON CONST MEMBER FUNCTION CALL)
    run();
    return 0;
}
