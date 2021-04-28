#include<iostream>
class Demo
{
    int a,b,c;
public:
    void setValues(int x,int y,int z)
    {
       this->a = x;
       this->b = y;
       this->c = z;
    }
    void display()
    {
        std::cout<<"Values of A,B,C are: ";
        std::cout<<this->a<<", "<<this->b<<", "<<this->c<<std::endl;
        std::cout<<"********************************************"<<std::endl;
    }
};
int main()
{
    int i;
    Demo d[10];
    for(i=0;i<10;i++)
    {
        d[i].setValues(i,i+1,i+2);
    }
    for(i=0;i<10;i++)
    {
        d[i].display();
    }
}
