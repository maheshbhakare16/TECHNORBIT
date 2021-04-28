#include<iostream>

class Demo
{
public:
    int size,*p;
    
    Demo(int size)
    {
        this->size  = size;
        p = (int*)malloc(size*sizeof(int));
    }
    
    int& operator[](int index)
    {
        if(index<0 && index>size)
        {
            std::cout<<"Wrong Index"<<std::endl;
        }
        return this->p[index];
    }
};
int main()
{
    Demo d(3);
    d[0] = 12;
    d[1] = 34;
    d[2] = 24;
    std::cout<<d[0]<<", "<<d[1]<<", "<<d[2]<<std::endl;
    d[0]++;
    d[1]++;
    d[2]++;
    std::cout<<d[0]<<", "<<d[1]<<", "<<d[2]<<std::endl;
    return 0;
}
